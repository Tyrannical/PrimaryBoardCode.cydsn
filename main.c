/* ========================================
 * Christopher Garling
 * ========================================
*/
#include <project.h>

int main()
{
    CyGlobalIntEnable;
    
   //2.0, 3.2, 3.0, 4.0
    
    for(;;)
    {
            //set off
            Pin_Red_Write(0);
            LED1_Write(0);
            LED2_Write(0);
            LED3_Write(0);
            MOSFET1_Write(0);
            CyDelay(100);
            
            //toggle fet
            MOSFET1_Write(1);
            CyDelay(1000);           
            MOSFET1_Write(0);
            CyDelay(100);
            
            //led1
            LED1_Write(1);
            CyDelay(1000);
            LED1_Write(0);
            CyDelay(100);
            
            //led2
            LED2_Write(1);
            CyDelay(1000);
            LED2_Write(0);
            CyDelay(100);
            
            //led3
            LED3_Write(1);
            CyDelay(1000);
            LED3_Write(0);
            CyDelay(100);   
    }
}
