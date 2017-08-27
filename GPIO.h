#ifndef __GPIO_H__
#define __GPIO_H__
#include "HW_gpio.h"



// enum used in debugging
typedef enum gpioDebug{
	OK=1,
  FAILED=0,
	
}gpioDebug_t;

// initialization PORTE
// it returns enum variable
void PortE_Init(void);



	
#endif //__GPIO_H__
