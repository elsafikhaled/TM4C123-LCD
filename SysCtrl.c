#include "SysCtrl.h"

// enable clock of the demanded port and to save power.

void clock_Enable_PORTE(void){
	U32_t delay=0;
	GPIO_RCGC_PORT=Clock_PortE;
	delay=GPIO_RCGC_PORT;
	
	
}
