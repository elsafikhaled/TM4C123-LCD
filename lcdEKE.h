/*
 * lcdEKE.h
 *
 *  Created on: 27/8/2017
 *      Author: El-safi
 */

#ifndef LCDEKE_H_
#define LCDEKE_H_
#include "data_types.h"

void EKE_LCD_cmd(U8_t cmd);

void EKE_LCD_INIT(void);
/*********************************************************************
* Function    : void EKE_LCD_INIT(void);

*
* DESCRIPTION : This function used to Initialize LCD Ports and send
* 				suitable default CMD before start display.
*
* PARAMETERS  : Void.
*
* Return Value: Void.
***********************************************************************/


void EKE_LCD_command(U8_t command);
/*********************************************************************
* Function    : void EKE_LCD_command(U8_t command);

*
* DESCRIPTION : This function used to send command to LCD .
*
* PARAMETERS  : U8_t command:  command User want to send.
*
* Return Value: Void.
***********************************************************************/
void EKE_LCD_enable(void);
/***********************************************
* Function :  void EKE_LCD_enable();
*
* DESCRIPTION: ENAABLE LCD
*
* PARAMETERS: void
*
* Return : void
**************************************************************************/

void EKE_LCD_data(U8_t data);
/*********************************************************************
* Function    : void EKE_LCD_data(U8_t data);
*
* DESCRIPTION : This function used to send command to LCD .
*
* PARAMETERS  : U8_t command:  command User want to send.
*
* Return Value: Void.
*************************************************************************/

void EKE_clear_lcd(void);
/*********************************************************************
* Function    : void EKE_clear_lcd();
*
* DESCRIPTION : This function used to clear LCD .
*
* PARAMETERS  : void.
*
* Return Value: Void.
*************************************************************************/
void goToRowColumn(U8_t row,U8_t column);
/*********************************************************************
* Function    : void goToRowColumn(U8_t row,U8_t column);
*
* DESCRIPTION : This function used to go to rows and any columns in  LCD .
*
* PARAMETERS  : U8_t row,U8_t column.
*
* Return Value: Void.
*************************************************************************/
void EKE_LCD_string(U8_t *str);
/*********************************************************************
* Function    : void EKE_LCD_string(U8_t str);
*
* DESCRIPTION : This function used to send string to LCD .
*
* PARAMETERS  : U8_t str.
*
* Return Value: Void.
*************************************************************************/
void EKE_LCD_intNumASCII(U16_t Number);
/*********************************************************************
* Function    : void EKE_LCD_intNum(U8_t Number);
*
* DESCRIPTION : This function used to send integers to LCD .
*
* PARAMETERS  : U8_t Number.
*
* Return Value: Void.
*************************************************************************/







#endif /* LCDEKE_H_ */
