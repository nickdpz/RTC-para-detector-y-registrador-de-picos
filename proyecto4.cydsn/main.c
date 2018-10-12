/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

#define DS1307_dir 0x68         
#define ds1307_dir_memory 0x00
#define direccion_de_registro_control 0x07
#define registro_control 0b10010001

typedef union
{struct{
  uint8_t sec;
  uint8_t min;
  uint8_t hour;
  uint8_t weekDay;
  uint8_t date;
  uint8_t month;
  uint8_t year;  
};
uint8_t datos[8];
}rtc_t;

rtc_t ds;
uint16 aux[3]={0,0,0};
volatile uint8 de=0;//Muestra Hora
volatile uint16 m=0;//  Numero de datos guardados
volatile uint16 n=0;// Cuenta de datos
volatile int k=0;//Cuenta dato actual


void DS_begintx (void){
        do{
                //Espera mienstras el esclavo le responde
        }while(I2C_MasterSendStart(DS1307_dir, I2C_WRITE_XFER_MODE)!=I2C_MSTR_NO_ERROR);
}

void DS_init(void){
    DS_begintx();
    I2C_MasterWriteByte(direccion_de_registro_control);  
    I2C_MasterWriteByte(registro_control);
    I2C_MasterSendStop();
    for(int i=0;i<1000;i++){
        EEPROM_WriteByte(0x00,i);}  
}

void DS_set_data(){
    uint8 i; 
    
    for(i=0;i<=7;i++){
        DS_begintx();
        I2C_MasterWriteByte(i);     // Escribe la posicion 
        I2C_MasterWriteByte(ds.datos[i]);            // Escribe el dato correspondiente
        I2C_MasterSendStop();
    }
}

void DS_get_data(){        
        uint8 i;
    for(i=0;i<=7;i++){
        DS_begintx();
        I2C_MasterWriteByte(i);//Pone direccion de memoria que quiere leer 
        I2C_MasterSendRestart(DS1307_dir, I2C_READ_XFER_MODE); // Re transmite para obtener datos
        ds.datos[i]=I2C_MasterReadByte(I2C_NAK_DATA);
        I2C_MasterSendStop();
    }    
}

uint16 E2PROM_16_R(uint16 p){
    uint16 temp;
    temp=EEPROM_ReadByte(p+1)<<8;
    temp=temp+EEPROM_ReadByte(p);
    return temp;
}

void E2PROM_16_W(uint16 a,uint16 p){
    uint8 temp;
    temp=(uint8)(0xFF&a);
    EEPROM_WriteByte(temp,p);
    temp=(uint8)(0xFF&(a>>8));
    EEPROM_WriteByte(temp,(p+1));
}


void visual(){
        LCD_PrintNumber(0x01&(ds.hour>>4));
        LCD_PrintNumber((0b00001111)&ds.hour);
        LCD_PutChar(':');
        LCD_PrintNumber(ds.min>>4);
        LCD_PrintNumber((0b00001111)&ds.min);
        LCD_PutChar(':');       
        LCD_PrintNumber(ds.sec>>4);
        LCD_PrintNumber((0b00001111)&ds.sec);
}

void visual2(){
        LCD_PrintNumber(0x01&(ds.date>>4));
        LCD_PrintNumber((0b00001111)&ds.date);
        LCD_PutChar('/');
        LCD_PrintNumber(ds.month>>4);
        LCD_PrintNumber((0b00001111)&ds.month);
        LCD_PutChar('/');       
        LCD_PrintNumber(ds.year>>4);
        LCD_PrintNumber((0b00001111)&ds.year);
}

void EE_get_data(){
                
                LCD_ClearDisplay();
                LCD_Position(0,0);
                LCD_PrintNumber(E2PROM_16_R(9*k+2));
                LCD_PrintString(" mV");
                for(int j=0;j<7;j++){
                    ds.datos[j]=EEPROM_ReadByte((uint16)(9*k+4+j));
                }    
                LCD_Position(0,8);
                visual2();
                LCD_Position(1,4);  
                visual();
}


CY_ISR(Inte){
    uint16 temp=0;
    
    aux[0]=aux[1];
    aux[1]=aux[2];
    ADC_StartConvert();
    ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
    temp=ADC_GetResult16();
    aux[2]=ADC_CountsTo_mVolts(temp);
        if((aux[1]>aux[0])&(aux[1]>aux[2])&(aux[1]>=2500)){
            
            if(m<9000){
            m=m+9; //cantidad de datos guardados
            }
            n=n+1;
            if(n==1000){
                  n=0;//n=dato actual de escritura de 0 a 1000     
            }
            E2PROM_16_W(n,0);
            //Guardar voltaje
            E2PROM_16_W(aux[1],9*n+2);
            DS_get_data();
            for(int j=0;j<7;j++){
                EEPROM_WriteByte(ds.datos[j],(uint16)(9*n+4+j));// Escribe los demas datos
            }
            if(de==0){//Muestra solo si esta en modo reloj
                LCD_Position(0,0);
                LCD_PrintString("               ");
                LCD_Position(0,0);
                LCD_PrintNumber(aux[1]);
                LCD_PrintString("mV ");    
                visual();
            }
        }
    }

CY_ISR(Intswr){
    switch(SW_Read()){
    case 0b00000110:
        LCD_ClearDisplay();
        if(de==0){
            de=1;//Actualiza Conversion
            k=(E2PROM_16_R(0));
            if(k==0){
                LCD_Position(0,0);
                LCD_PrintString("No hay datos");
            }else{
                EE_get_data();
            }
        }else{
            de=0;
        }
        break;
    case 0b00000101:
        if(de==1){//Boton desendente
            k=k-1;
            if(k<=0){
                k=n;
            }
            EE_get_data();
                
        }
        break;
    case 0b00000011:
        if(de==1){//Boton acendente
            k=k+1;
            if(k>n){
                k=1;
            }
            EE_get_data();                
        }
        break;
     default:
        break;
    }
    SW_ClearInterrupt();
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    LCD_Start();
    I2C_Start();
    Timer_Start();
    IRS_StartEx(Inte);
    ISR_SW_StartEx(Intswr);
    ADC_Start();
    ds.hour = 0b00010001;
    ds.min =  0x51;
    ds.sec =  0x00; //  11:05:30 am
    ds.date = 0x12; 
    ds.month = 0x10;
    ds.year = 0x18; //12 octubre 2018
    ds.weekDay = 5; // Friday: 5th day of week considering monday as first day.
    EEPROM_Start();
    DS_init();//Configura 
    n=(E2PROM_16_R(0));
    //DS_set_data();    
    for(;;)
    {   if(de==0){
            DS_get_data();     
            LCD_Position(1,4);
            visual();
            CyDelay(500);
        }
    }
}

/* [] END OF FILE */