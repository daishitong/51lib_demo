/* site:https://github.com/daishitong/51lib_demo */

#include "51lib.h"

void main()
{
  char i;
  
  while(1)
  {
    for(i = 0;i <= 100;i++)
    {
        Moto_RunCW(i);
    }
    
    for(i = 0;i <= 100;i++)
    {
        Moto_RunCCW(i);
    }
  }
}