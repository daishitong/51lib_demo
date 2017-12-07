/* site:https://github.com/daishitong/51lib */

#ifndef __TIMER2_H__
#define __TIMER2_H__

#include "Global.h"
#include "Timer.h"

void Timer2_Init(Action timer2Handler);
void Timer2_SetTimeOut(ushort us);
void Timer2_SetCounterOut(ushort nCount);
void Timer2_Start();
void Timer2_Stop();

#endif