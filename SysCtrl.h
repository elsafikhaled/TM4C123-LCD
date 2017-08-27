#ifndef __SYSCTRL_H__
#define __SYSCTRL_H__
#include "data_types.h"

// BASE FOR RUN MODE CLOCK GAtING CONTROL
#define GPIO_RCGC_BASE 0x400FE000

// RCGC register with offset  0x608 at PORTA

#define GPIO_RCGC_PORT  *((volatile U32_t *)0X400FE608)

// RCGC register PINS offset

#define Clock_PortA  0x01
#define Clock_PortB  0x02
#define Clock_PortC  0x04
#define Clock_PortD  0x08
#define Clock_PortE  0x10
#define Clock_PortF  0x20

// function: Enable clock for PORTE is a must

void clock_Enable_PORTE(void);











#endif //__SYSCTRL_H__
