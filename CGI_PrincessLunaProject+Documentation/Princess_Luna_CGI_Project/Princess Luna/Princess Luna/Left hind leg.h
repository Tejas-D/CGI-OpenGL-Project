/*********************************************************************************************************************************
Author: Tyron McDonald 
Date: 2014-04-11
Operating system: Windows 7
IDE : Microsoft Visual Studio 2012 for Windows Desktop
Description : this file contains the draw_upper_hind_left_leg and draw_lower_hind_left_leg function definition
**********************************************************************************************************************************/
#ifndef LEFT_HIND_LEG_H
#define LEFT_HIND_LEG_H

#include "Drawing Class.h"


/***********************/
/*    Left hind leg   */
/***********************/
void Drawing::draw_upper_hind_left_leg(float legmove)
{
	glPushMatrix();
	glTranslatef(0,legmove,0);
	letter_l(-0.25,0.5,1.5,90,0,1,0,1,1,1,0.22 ,0.29 ,0.63);
	draw_lower_hind_left_leg();
	glPopMatrix();
}
void Drawing::draw_lower_hind_left_leg()
{
	glPushMatrix();
	glTranslatef(0.0,-1.5,2.25);
	glRotatef(180,1,0,0);
	glScalef(1,1,1);
	letter_l(-0.25,-0.5,0.35,90,0,1,0,1,1,1,0.22 ,0.29 ,0.63);
	glPopMatrix();
	//feet
	letter_m(-0.58,-1.1,1.35,90,1,0,0,0.2,0.5,0.5);
}
#endif