#include<avr/io.h>
#include "activity4.h"

void InitUART(uint16_t ua_value){

    UBRR0L = ua_value;
    UBRR0H = (ua_value>>8)&(0x00ff);
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ01);

    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}

void Uwrite(char v)
{
    while(!(UCSR0A & (1<<UDRE0)))
    {

    }
    UDR0 = v;
}