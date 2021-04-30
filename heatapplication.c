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
#include "activity3.h"
#include "activity4.h"
#include "peripheral.h"
#include<avr/io.h>


uint16_t temp;
char value;

int main(void)
{
    peripheral(); //initializing pheripherals
    while(1)
    {
        if(SEAT_ON) //If switch 1 is ON
        {
            if(HEATER_ON) //If switch 2 is ON
            {
                ledstate(LED_ON);//LED becomes on
                temp=ReadADC(0); 
                value= pwm(temp);
                Uwrite(value);

               
            }
            else
            {
                
                ledstate(LED_OFF);
            }
        }
        else
        {
            ledstate(LED_OFF);//LED is OFF
            OCR1A=0;
        }
       
    }
    return 0;
}