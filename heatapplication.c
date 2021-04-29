/**
 * @file heatapplication.c
 * @author 291474(you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "activity1.h"
#include "activity2.h"
#include<avr/io.h>

/**
 * @brief initializing peripherals
 * 
 */
void peripheral_init(void)
{
    InitLED(); /*configure led ad button pins*/
    InitADC();
   
}
    
uint16_t temp;

int main(void)
{
    peripheral_init(); //initializing pheripherals
    while(1)
    {
        if(SEAT_ON) //If switch 1 is ON
        {
            if(HEATER_ON) //If switch 2 is ON
            {
                ledstate(LED_ON);//LED becomes on
                temp=ReadADC(0);
               
            }
        }
            else
            {
                
                ledstate(LED_OFF);
            }
       
    }
    return 0;
}