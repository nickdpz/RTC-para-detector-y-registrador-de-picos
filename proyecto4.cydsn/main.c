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
uint8_t datos[7];
}rtc_t;

uint8 resultado;

void DS_init(void){
    
    do{
        resultado=I2C_MasterSendStart(DS1307_dir, I2C_WRITE_XFER_MODE);// I2C_WRITE_XFER_MODE es un 0
        }while(resultado!=I2C_MSTR_NO_ERROR);
        
    I2C_MasterWriteByte(direccion_de_registro_control);  
    I2C_MasterWriteByte(registro_control);
    I2C_MasterSendStop();
    LCD_Position(0,0);
    LCD_PrintString("h0oli:");    
}

void DS_set_data(rtc_t *rtc){
     uint8 t=0;
    do{
        resultado=I2C_MasterSendStart(DS1307_dir, I2C_WRITE_XFER_MODE);// I2C_WRITE_XFER_MODE es un 0
        t=t+1;
        LCD_Position(0,t);
        LCD_PrintString("x"); 
        }while(resultado!=I2C_MSTR_NO_ERROR);
        I2C_MasterWriteByte(ds1307_dir_memory);
        LCD_Position(0,10);
        LCD_PrintString("zz"); 
        I2C_MasterWriteByte((rtc->sec));                     // escribe sec en la ram del sensor direccion 00H
        LCD_Position(0,7);
        LCD_PrintString("a");
        I2C_MasterReadByte(rtc->min);                      // escribe min en la ram del sensor direccion 01H
        LCD_Position(0,6);
        LCD_PrintString("b");
        I2C_MasterReadByte(rtc->hour);                     //escribe hora en la ram del sensor direccion 02H 
        LCD_Position(0,10);
        LCD_PrintString("t"); 
        I2C_MasterReadByte(rtc->weekDay);                  // escribe semana en la ram del sensor direccion 03H   
        I2C_MasterReadByte(rtc->date);                     // escribe fecha en la ram del sensor direccion 04H
        I2C_MasterReadByte(rtc->month);                    // escribe mes en la ram del sensor direccion 05H
        I2C_MasterReadByte(rtc->year);                     // escribe año en la ram del sensor direccion 06H
        I2C_MasterSendStop();
        LCD_Position(0,10);
        LCD_PrintString("x"); 
    //I2C_MasterWriteBuf(DS1307_dir, rtc->datos[1],1,I2C_WRITE_XFER_MODE);
}

void DS_get_data(rtc_t *rtc){
    uint8_t comando[] = {ds1307_dir_memory};
    I2C_MasterWriteBuf(DS1307_dir,comando,1,I2C_MODE_COMPLETE_XFER);
    do{resultado=I2C_MasterStatus();
        }while(resultado==I2C_MSTAT_XFER_INP);
    resultado=I2C_MasterReadBuf(DS1307_dir,rtc->datos,7,I2C_MODE_COMPLETE_XFER);//como dato no tiene
    if(resultado==I2C_MSTR_NO_ERROR){
    LCD_Position(1,3);
    LCD_PrintString("ss");
    }
    /*
     uint8 t=0;
    do{
        resultado=I2C_MasterSendStart(DS1307_dir, I2C_WRITE_XFER_MODE);// I2C_WRITE_XFER_MODE es un 0
        t=t+1;
        LCD_Position(0,t);
        LCD_PrintString("o"); 
        }while(resultado!=I2C_MSTR_NO_ERROR);
    I2C_MasterWriteByte(ds1307_dir_memory);
    I2C_MasterSendStop();
    I2C_MasterSendRestart(DS1307_dir,I2C_READ_XFER_MODE); //reestablesco la comunicacion yla pongo en modo lectura
    rtc->sec=I2C_MasterReadByte(I2C_ACK_DATA); //pongo el valor del sensor en sec
    rtc->min=I2C_MasterReadByte(I2C_ACK_DATA);
    rtc->hour=I2C_MasterReadByte(I2C_ACK_DATA);
    rtc->weekDay=I2C_MasterReadByte(I2C_ACK_DATA);
    rtc->date=I2C_MasterReadByte(I2C_ACK_DATA);
    rtc->month=I2C_MasterReadByte(I2C_ACK_DATA);
    rtc->year=I2C_MasterReadByte(I2C_ACK_DATA);
    I2C_MasterSendStop();
    */
    
    
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    LCD_Start();
    I2C_Start();
   
    rtc_t ds;
     
    
    DS_init();
    ds.hour = 0x20;
    ds.min =  0x06;
    ds.sec =  0x30; //  20:06:30 am
    LCD_Position(1,8);
    LCD_PrintInt8(ds.sec);
    ds.date = 0x09; 
    ds.month = 0x10;
    ds.year = 0x18; //1ro octubre 2018
    ds.weekDay = 5; // Friday: 5th day of week considering monday as first day.
    
    DS_set_data(&ds);
    
    LCD_Position(0,0);
    LCD_PrintString("A");
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
        
        DS_get_data(&ds);
        //LCD_Position(1,0);
        //LCD_PrintString("d");
        LCD_Position(1,0);
        LCD_PrintInt8(ds.sec);
        
    
        //LCD_PrintNumber((uint_fast16_t)ds.min);
        CyDelay(500);
    }
}

/* [] END OF FILE */
