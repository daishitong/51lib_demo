/* site:https://github.com/daishitong/51lib */

#ifndef __GLOBAL_H__
#define __GLOBAL_H__

#ifndef NULL
#define NULL ((void *)0)
#endif

#define bool bit
#define true  1
#define false 0

#define uint    unsigned int
#define ushort  unsigned short
#define uchar   unsigned char

typedef void (*Action)();
typedef bool (*CheckHandler)();

#endif