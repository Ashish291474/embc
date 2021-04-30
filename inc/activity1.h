/**
 * @file status of led
 * @author 291474 (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY1_H_
#define __ACTIVITY1_H_

#include<avr/io.h>



/**
 * @brief macro definitions
 * 
 */
#define LED_PORT (PORTB)    /**LED Port Number */
#define LED_PIN  (PORTB0)   /**LED Pin number  */
#define LED_ON 	(PORTB|=(1<<PB0))	/**LED state HIGH */
#define LED_OFF	(PORTB&=~(1<<PB0))	/**LED state LOW */



#define SEAT_ON !(PIND&(1<<PD0)) // Switch1 ON
#define HEATER_ON !(PIND&(1<<PD1)) // Switch2 ON

/**
 * Function Definitions
 */

void ledstate(uint8_t state);
void InitLED(void);

#endif