/* site:https://github.com/daishitong/51lib_demo */

#include "51lib.h"

void Led_Blink(short ms)
{
    Led_TurnOn();
    delay_nms(ms);
    Led_TurnOff();
    delay_nms(ms);
}

void main()
{
    while (1)
    {
        switch (Key_GetClickType())
        {
        case Key_OneClick:
            while(!Key_CheckClicked())
            {
                Led_Blink(100);
            }
            break;
        case Key_DoubleClick:
            while(!Key_CheckClicked())
            {
                Led_Blink(30);
            }
            break;
        }
    }
}
