/* site:https://github.com/daishitong/51lib */

#ifndef __TIMER2_PWM_H__
#define __TIMER2_PWM_H__

#include <reg52.h>
#include "Global.h"

sbit Timer_PWM_Pin = P1^0;

void Timer2_PWM_Init();
void Timer2_PWM(ushort high_us,ushort low_us);

#endif