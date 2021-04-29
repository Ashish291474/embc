#ifndef __ACTIVITY1_H_
#define __ACTIVITY1_H_

#include<avr/io.h>


//Macro definition 

#define LED_ON 	(0x01)			/**LED state HIGH */
#define LED_OFF	(0x00)			/**LED state LOW */


#define LED_PORT (PORTB)    /**LED Port Number */
#define LED_PIN  (PORTB0)   /**LED Pin number  */
#define SEAT_ON !(PIND&(1<<PD0)) // Switch1 ON
#define HEATER_ON !(PIND&(1<<PD1)) // Switch2 ON

/**
 * Function Definitions
 */

void ledstate(uint8_t state);
void InitLED(void);

#endif