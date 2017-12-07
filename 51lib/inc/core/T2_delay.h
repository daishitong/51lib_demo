/* site:https://github.com/daishitong/51lib */

#ifndef __T2_DELAY_H__
#define __T2_DELAY_H__

void T2Delay_Init();
void T2Delay_DelayCount(unsigned short nCount);    // fixed-offset:+26us

void T2Delay_DelayTicks(unsigned short nTicks);
void T2Delay_DelayUS(unsigned short us);          // fixed-offset:+1.8ms

#endif