#ifndef __ACTIVITY4_H__
#define __ACTIVITY4_H__
#include<avr/io.h>

void InitUART(uint16_t ua);

char Uread();

void Uwrite(char v);

#endif