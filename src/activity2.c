#include<avr/io.h>
#include "activity2.h"

uint16_t ReadADC(uint8_t adc)
{
    //Select ADC Channel adc must be 0-7
    ADMUX&=0xf8;
    adc=adc&0b00000111;
    ADMUX|=adc;
    //Start single conversion
    ADCSRA|=(1<<ADSC);
    //Wait for conversion to complete
    while(!(ADCSRA & (1<<ADIF)));
    //Clear ADIF by writing one to it
    ADCSRA|=(1<<ADIF);
    return(ADC);
}
void InitADC()
{
    ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
    
}