/* site:https://github.com/daishitong/51lib_demo */

#include "51lib.h"

void main()
{
    unsigned char i;

    while(1)
    {
        for(i = 0;i < 128;i++)
        {
            StepperMotor_Run_CW();
        }
        for(i = 0;i < 128;i++)
        {
            StepperMotor_Run_CCW();
        }
        for(i = 0;i < 128;i++)
        {
            delay_nms(10);
        }
    }
}