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
#include <project.h>

/*
LED Pin Layout
LED 1: 1.2
LED 2: 0.5
LED 3: 1.0
LED 4: 3.0
LED 5: 3.2
LED 6: 4.0
*/
void setStateOff()
{
    LED1_Write(0);
    LED2_Write(0);
    LED3_Write(0);
    LED4_Write(0);
    LED5_Write(0);
    LED6_Write(0);
}

void binary1(double n)
{
    double delayValue = n;
}

/* [] END OF FILE */
