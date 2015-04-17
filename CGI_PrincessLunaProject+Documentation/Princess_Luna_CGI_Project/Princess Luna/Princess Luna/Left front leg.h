/*********************************************************************************************************************************
Author: Tyron McDonald 
Date: 2014-04-11
Operating system: Windows 7
IDE : Microsoft Visual Studio 2012 for Windows Desktop
Description : this file contains the draw_upper_front_left_leg and draw_lower_front_left_leg function definition
**********************************************************************************************************************************/

#ifndef LEFT_FRONT_LEG_H
#define LEFT_FRONT_LEG_H

#include "Drawing Class.h"

/***********************/
/*    Left front leg   */
/***********************/
void Drawing::draw_upper_front_left_leg(float legmove)
{
	glPushMatrix();
	glTranslatef(0,legmove,0);
	letter_i(0.05, 0.9, -1.1, 15, 180, 1, 1, 1, 1.2, 1);
	letter_m(-0.6, -1.1, -1.55, 270, -90, 1, 1, 0.2, 0.5, 0.5);
	draw_lower_front_left_leg();
	glPopMatrix();
}
void Drawing::draw_lower_front_left_leg()
{
	letter_i(0.05 ,-0.1, -1.4, 1, 180, 1, 1, 1, 0.85, 1);
}
#endif