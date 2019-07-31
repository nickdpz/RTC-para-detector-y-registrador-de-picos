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


CY_ISR(InterruptFoto){
    LED_Write(~LED_Read()); 
    INFRA_ClearInterrupt();
}
int main(void)
{   
    CyGlobalIntEnable; /* Enable global interrupts. */
    ISR_FOTO_StartEx(InterruptFoto);
    LED_Write(1);
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
