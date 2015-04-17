/*********************************************************************************************************************************
Author: Tejas Dwarkaram
Date: 2014-04-11
Operating system: Windows 7
IDE : Microsoft Visual Studio 2012 for Windows Desktop
Description : this file contains the draw_lower_left_wing , draw_middle_left_wing and draw_upper_left_wing function definitions
**********************************************************************************************************************************/
#ifndef LOWER_LEFT_WING_H
#define LOWER_LEFT_WING_H

#include "Drawing Class.h"



/***********************/
/*    Left wing        */
/***********************/


void Drawing::draw_lower_left_wing(float left_upper_wing_rot, float left_middle_wing_rot,float left_lower_wing_rot)
{
	
	glPushMatrix();
	glTranslatef(0,bodymove,0);
	glRotatef(left_lower_wing_rot,0,0,1);
    glScalef(1,1,1);

	
	
	letter_n(0.8, 1.6, 0,left_lower_wing_rot,0,0,1, 0.7, 0.7, 0.7,90,1,0,0);
	letter_r(0.8, 1.6, 0,left_lower_wing_rot,0,0,1, 0.7, 0.7, 0.7, 0 , 0 , 120,90,1,0,0);
	letter_n(1.1, 1.6, -0.3,left_lower_wing_rot,0,0,1, 0.7, 0.7, 0.7,90,1,0,0);
	letter_r(1.1, 1.6, -0.3,left_lower_wing_rot,0,0,1, 0.7, 0.7, 0.7, 0 , 0 , 120,90,1,0,0);
	letter_n(1.4, 1.6, -0.6,left_lower_wing_rot,0,0,1, 0.7, 0.7, 0.7,90,1,0,0);
	letter_r(1.4, 1.6, -0.6,left_lower_wing_rot,0,0,1, 0.7, 0.7, 0.7, 0 , 0 , 120,90,1,0,0);

	draw_middle_left_wing(left_middle_wing_rot,left_upper_wing_rot);
	glPopMatrix();
	
}

//middle left wing
void Drawing::draw_middle_left_wing(float left_middle_wing_rot, float left_upper_wing_rot)
{
	

	letter_n(1.7, 1.6, -0.6,left_middle_wing_rot,0,0,1, 0.7, 0.7, 0.7,90,1,0,0);
	letter_r(1.7, 1.6, -0.6, left_middle_wing_rot,0,0,1, 0.7, 0.7, 0.7, 0 , 0 , 120,90,1,0,0);
	letter_n(2.0, 1.6, -0.9,left_middle_wing_rot,0,0,1, 0.7, 0.7, 0.7,90,1,0,0);
	letter_r(2.0, 1.6, -0.9,left_middle_wing_rot,0,0,1, 0.7, 0.7, 0.7, 0 , 0 , 120,90,1,0,0);
	letter_n(2.3, 1.6, -1.2,left_middle_wing_rot,0,0,1, 0.7, 0.7, 0.7,90,1,0,0);
	letter_r(2.3, 1.6, -1.2,left_middle_wing_rot,0,0,1, 0.7, 0.7, 0.7, 0 , 0 , 120,90,1,0,0);
	draw_upper_left_wing(left_upper_wing_rot);
	
}

//upper left wing
void Drawing::draw_upper_left_wing(float left_upper_wing_rot)
{

	letter_n(2.6, 1.6, -1.2, left_upper_wing_rot,0,0,1, 0.7, 0.7, 0.7,90,1,0,0);
	letter_r(2.6, 1.6, -1.2,left_upper_wing_rot,0,0,1, 0.7, 0.7, 0.7, 0 , 0 , 120,90,1,0,0);
	letter_n(2.9, 1.6, -1.5,left_upper_wing_rot,0,0,1, 0.7, 0.7, 0.7,90,1,0,0);
	letter_r(2.9, 1.6, -1.5, left_upper_wing_rot,0,0,1, 0.7, 0.7, 0.7, 0 , 0 , 120,90,1,0,0);
	letter_n(3.2, 1.6, -1.8, left_upper_wing_rot,0,0,1, 0.7, 0.7, 0.7,90,1,0,0);
	letter_r(3.2, 1.6, -1.8,left_upper_wing_rot,0,0,1, 0.7, 0.7, 0.7, 0 , 0 , 120,90,1,0,0);/**/
	


}
#endif