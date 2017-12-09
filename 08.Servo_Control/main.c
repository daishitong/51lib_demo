/* site:https://github.com/daishitong/51lib_demo */

#include "51lib.h"

void main()
{
    Servo_Init();
    
    while (1)
    {
        Servo_Run(1500,100);
        Servo_Run(2000,100);
        Servo_Run(1500,100);
        Servo_Run(1000,100);
    }
}