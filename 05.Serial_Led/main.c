/* site:https://github.com/daishitong/51lib_demo */

#include "51lib.h"

// CMD_ARGUMENTS_COUNT:The number of input fields that should be successfully converted.
#define CMD_ARGUMENTS_COUNT 1

void Serial_ParseReceiveBuffer(char* buffer)
{
    unsigned char ch;
    
    if(sscanf(buffer,"%bd;",&ch) == CMD_ARGUMENTS_COUNT)
    {
        switch(ch)
        {
        case 0:
            Led_TurnOff();
            break;
        case 1:
            Led_TurnOn();
            break;
        default:
            break;
        }
    }

    printf("%bd",ch);
}

void main()
{
    Serial_Init();
    Serial_SetParseHandler(Serial_ParseReceiveBuffer);
    
    printf("Please Enter Command,for example:1; Or 0;\r\n");
    while(1)
    {
        
    }
}
