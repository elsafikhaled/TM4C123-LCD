#ifndef __HW_GPIO_H__ 
#define __HW_GPIO_H__ 
#include "data_types.h"
//PORTA

//PORTA PINS

#define  PA2   2
#define  PA3   3
#define  PA4   4
#define  PA5   5
#define  PA6   6
#define  PA7   7

// Base Addresses APB
#define GPIO_PORTA_APB_BASE 0x40024000

// Base Adresses AHPB
#define GPIO_PORTA_AHPB_BASE 0x4005C000

// APB:advanced peripheral Bus
#define GPIO_PORTA_DATA              *((volatile U32_t *)0x400243FC)
#define GPIO_PORTA_DIR               *((volatile U32_t *)0x40024400)
#define GPIO_PORTA_INTSEN            *((volatile U32_t *)0x40024404)
#define GPIO_PORTA_INTBEDG           *((volatile U32_t *)0x40024408)
#define GPIO_PORTA_INTEVET           *((volatile U32_t *)0x4002440C)
#define GPIO_PORTA_INTMAS            *((volatile U32_t *)0x40024410)	
#define GPIO_PORTA_INTRS             *((volatile U32_t *)0x40024414)
#define GPIO_PORTA_INTMIS            *((volatile U32_t *)0x40024418)
#define GPIO_PORTA_INTCLEAR          *((volatile U32_t *)0x4002441C)
#define GPIO_PORTA_AFSEL             *((volatile U32_t *)0x40024420)
#define GPIO_PORTA_DR2R              *((volatile U32_t *)0x40024500)
#define GPIO_PORTA_DR4R              *((volatile U32_t *)0x40024504)
#define GPIO_PORTA_DR8R              *((volatile U32_t *)0x40024508)	
#define GPIO_PORTA_OPDR              *((volatile U32_t *)0x4002450C)
#define GPIO_PORTA_PUR               *((volatile U32_t *)0x40024510)
#define GPIO_PORTA_PDR               *((volatile U32_t *)0x40024514)
#define GPIO_PORTA_SLR               *((volatile U32_t *)0x40024518)
#define GPIO_PORTA_DEN               *((volatile U32_t *)0x4002451C)
#define GPIO_PORTA_lock              *((volatile U32_t *)0x40024520)
#define GPIO_PORTA_CR                *((volatile U32_t *)0x40024524)
#define GPIO_PORTA_AMSEL             *((volatile U32_t *)0x40024528)
#define GPIO_PORTA_PCTRL             *((volatile U32_t *)0x4002452C)
#define GPIO_PORTA_ADCCTRL           *((volatile U32_t *)0x40024530)
#define GPIO_PORTA_DMA               *((volatile U32_t *)0x40024534)
	

//PORTE

// PORTE PINS

#define  PE0   0
#define  PE1   1
#define  PE2   2
#define  PE3   3
#define  PE4   4
#define  PE5   5

// Base Addresses APB
#define GPIO_PORTE_APB_BASE 0x40024000

// Base Adresses AHPB
#define GPIO_PORTE_AHPB_BASE 0x4005C000

// APB:advanced peripheral Bus
#define GPIO_PORTE_DATA              *((volatile U32_t *)0x400243FC)
#define GPIO_PORTE_DIR               *((volatile U32_t *)0x40024400)
#define GPIO_PORTE_INTSEN            *((volatile U32_t *)0x40024404)
#define GPIO_PORTE_INTBEDG           *((volatile U32_t *)0x40024408)
#define GPIO_PORTE_INTEVET           *((volatile U32_t *)0x4002440C)
#define GPIO_PORTE_INTMAS            *((volatile U32_t *)0x40024410)	
#define GPIO_PORTE_INTRS             *((volatile U32_t *)0x40024414)
#define GPIO_PORTE_INTMIS            *((volatile U32_t *)0x40024418)
#define GPIO_PORTE_INTCLEAR          *((volatile U32_t *)0x4002441C)
#define GPIO_PORTE_AFSEL             *((volatile U32_t *)0x40024420)
#define GPIO_PORTE_DR2R              *((volatile U32_t *)0x40024500)
#define GPIO_PORTE_DR4R              *((volatile U32_t *)0x40024504)
#define GPIO_PORTE_DR8R              *((volatile U32_t *)0x40024508)	
#define GPIO_PORTE_OPDR              *((volatile U32_t *)0x4002450C)
#define GPIO_PORTE_PUR               *((volatile U32_t *)0x40024510)
#define GPIO_PORTE_PDR               *((volatile U32_t *)0x40024514)
#define GPIO_PORTE_SLR               *((volatile U32_t *)0x40024518)
#define GPIO_PORTE_DEN               *((volatile U32_t *)0x4002451C)
#define GPIO_PORTE_lock              *((volatile U32_t *)0x40024520)
#define GPIO_PORTE_CR                *((volatile U32_t *)0x40024524)
#define GPIO_PORTE_AMSEL             *((volatile U32_t *)0x40024528)
#define GPIO_PORTE_PCTRL             *((volatile U32_t *)0x4002452C)
#define GPIO_PORTE_ADCCTRL           *((volatile U32_t *)0x40024530)
#define GPIO_PORTE_DMA               *((volatile U32_t *)0x40024534)
	







#endif //__HW_GPIO_H__ 

