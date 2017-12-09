/* site:https://github.com/daishitong/51lib_demo */

#include "51lib.h"

void main()
{
    while(1)
    {
        Led_TurnOn();
        delay_nms(500);
        Led_TurnOff();
        delay_nms(500);
    }
}