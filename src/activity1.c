
// include files

#include<avr/io.h>
#include "activity1.h"

void InitLED(void)
{
	DDRB|=(1<<PB0);
    DDRD&=~(1<<PD0);
    PORTD|=(1<<PD0);
    DDRD&=~(1<<PD1);
    PORTD|=(1<<PD1);
}

void ledstate(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}
