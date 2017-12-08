/* site:https://github.com/daishitong/51lib */

#ifndef __SERVO_H__
#define __SERVO_H__

#include <reg52.h>

sbit Servo_Pin = P2^7;

void Servo_Init();
void Servo_Run_OneCycle(short high_us);
void Servo_Run(short high_us,short count);

#endif