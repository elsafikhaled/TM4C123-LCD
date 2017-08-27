#include"lcdEKE.h"
#include"SpecialFunction.h"
#include"SysCtrl.h"
#include"GPIO.h"
int main(void){
	clock_Enable_PORTE();
	EKE_LCD_INIT();
	
	while(1){
		EKE_LCD_data('A');
		
		
		
	}
}
