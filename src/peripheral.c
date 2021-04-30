#include "peripheral.h"
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

void peripheral(void)
{
    InitLED(); /*configure led ad button pins*/
    InitADC();
    InitPWM();
    InitUART(103);
    
   
}