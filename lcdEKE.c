/*
 * lcdEKE.c
 *
 *  Created on: 27/8/2017
 *      Author: El-safi
 */
#include "lcdEKEconfig.h"
#include "lcdEKE.h"
#include "HW_gpio.h"
#include "GPIO.h"
#include "SpecialFunction.h"

void EKE_LCD_cmd(U8_t cmd){
	// register select=0 to send command to LCD
   GPIO_PORTE_DATA&=~(1<<PE4);
	// send 4 high bits  
   GPIO_PORTE_DATA=(cmd>>4); 
	// now sending low 4bits
   EKE_LCD_enable();

	
}
void EKE_LCD_INIT(void)
{
// configure PORTE  4 pins as output for data and 2 pins for RS,EN.

	PortE_Init();

/*********         configure LCD         ***********/
  // wait to be on . send 8 bit commands as datasheet said
  delayMsec(20);
  EKE_LCD_cmd(0x30);
  delayMsec(5);
  EKE_LCD_cmd(0x30);
  delayUs(100);
  EKE_LCD_cmd(0x30);
  delayUs(40);
  EKE_LCD_cmd(0x20);  // this 4 bit style as datasheet said
  delayUs(40);
 // LCD CONFIGURE mode 4 bit
  EKE_LCD_command(0x28);
	delayUs(40);
 // go to first line 0 position
  EKE_LCD_command(0x80);
	delayUs(40);
 // cursor off and no blink
  EKE_LCD_command(0x0c);
	delayUs(40);
 // automatic increament and no display shift
  EKE_LCD_command(0x06);
	delayUs(40);
 // clear lcd no display
	EKE_clear_lcd();


}
///////////////////////////////////////////////////////////////////////////////////////

void EKE_LCD_command(U8_t command)
{

// register select=0 to send command to LCD
   GPIO_PORTE_DATA&=~(1<<PE4);
	
// send 4 high bits  
   GPIO_PORTE_DATA=(command>>4);   
// now sending low 4bits
   EKE_LCD_enable();

// send 4 low  bits
   GPIO_PORTE_DATA=(0x0f&command);	
// now sending 4bits
   EKE_LCD_enable();
	
// wait for running the command
	if(command <4){
   delayUs(2);
	}
	else{
		delayUs(40);
	}
}

///////////////////////////////////////////////////////////////////////////////////////////
void EKE_LCD_data(U8_t data)
{

// register select=1 to send data to LCD
   GPIO_PORTE_DATA|=(1<<PE4);
	
// send 4 high bits  
   GPIO_PORTE_DATA=(data>>4);   
// now sending low 4bits
   EKE_LCD_enable();

// send 4 low  bits
   GPIO_PORTE_DATA=(0x0f&data);	
// now sending 4bits
   EKE_LCD_enable();
	
// wait for running the command
   delayUs(40);
}

///////////////////////////////////////////////////////////////////////////////////////
void EKE_LCD_enable(void)
{
	GPIO_PORTE_DATA|=(1<<PE5);
	delayUs(1);
	GPIO_PORTE_DATA&=~(1<<PE5);
	delayUs(1);
}
///////////////////////////////////////////////////////////////////////////////////////////

void EKE_clear_lcd(void)
{
	EKE_LCD_command(0x01);
	delayMsec(2);
}
////////////////////////////////////////////////////////////////////////////////////////////

void goToRowColumn(U8_t row,U8_t column)
{
	U8_t firstAddress[] = {0x80,0xC0,0x94,0xD4};

	 	EKE_LCD_command(firstAddress[row-1] + column-1);
	 	delayMsec(10);
}
////////////////////////////////////////////////////////////////////////////////////////

void EKE_LCD_string(U8_t *str)
{
	U8_t i = 0;

	 	while(str[i]!=0)
	 	{
	 		EKE_LCD_data(str[i]);
	 		i++;
	 	}
}
///////////////////////////////////////////////////////////////////////////////////////

void EKE_LCD_intNumASCII(U16_t Number)
{
  char buffer[16]={0};
  //itoa(Number,(char*)buffer,10);  // 10 to convert only to numbers more 10 will print litters
  EKE_LCD_string((U8_t*)buffer);
}
///////////////////////////////////////////////////////////////////////////////////////////
