/* site:https://github.com/daishitong/51lib_demo */

#include "51lib.h"

#define AlarmDistance 200

void main()
{
    float distance;

    HC_SR04_Init();
    while (1)
    {
        distance = HC_SR04_GetDistance();

        if (distance < AlarmDistance)
        {
            Led_TurnOn();
        }
        else
        {
            Led_TurnOff();
        }
    }
}