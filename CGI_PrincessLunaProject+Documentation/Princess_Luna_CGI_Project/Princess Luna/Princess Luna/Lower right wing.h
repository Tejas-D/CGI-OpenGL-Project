/*********************************************************************************************************************************
Author: Tejas Dwarkaram 
Date: 2014-04-11
Operating system: Windows 7
IDE : Microsoft Visual Studio 2012 for Windows Desktop
Description : this file contains the draw_lower_right_wing , draw_middle_right_wing and draw_upper_right_wing function definitions
**********************************************************************************************************************************/
#ifndef LOWER_RIGHT_WING_H
#define LOWER_RIGHT_WING_H

#include "Drawing Class.h"




/***********************/
/*    Right wing		*/
/***********************/

void Drawing::draw_lower_right_wing(float right_upper_wing_rot, float right_middle_wing_rot,float right_lower_wing_rot)
{
	glPushMatrix();
	glTranslatef(0,bodymove,0);
	glRotatef(right_lower_wing_rot,0,0,1);
    glScalef(1,1,1);

	letter_n(-0.8, 1.95, 0, right_upper_wing_rot,0,0,1, 0.7, 0.7, 0.7,180, 0, -180, -180);
	letter_r(-0.8, 1.95, 0, right_upper_wing_rot,0,0,1, 0.7, 0.7, 0.7, 0 , 0 , 120,180, 0, -180, -180);
	letter_n(-1.1, 1.95, -0.3, right_upper_wing_rot,0,0,1, 0.7, 0.7, 0.7,180, 0, -180, -180);
	letter_r(-1.1, 1.95, -0.3, right_upper_wing_rot,0,0,1, 0.7, 0.7, 0.7, 0 , 0 , 120,180, 0, -180, -180);
    letter_n(-1.4, 1.95, -0.6, right_upper_wing_rot,0,0,1, 0.7, 0.7, 0.7,180, 0, -180, -180);
	letter_r(-1.4, 1.95, -0.6, right_upper_wing_rot,0,0,1, 0.7, 0.7, 0.7, 0 , 0 , 120,180, 0, -180, -180);
	draw_middle_right_wing( right_upper_wing_rot,  right_middle_wing_rot);
	glPopMatrix();
}
//middle right wing
void Drawing::draw_middle_right_wing(float right_upper_wing_rot, float right_middle_wing_rot)
{
	
	letter_n(-1.7, 1.95, -0.6, right_middle_wing_rot,0,0,1, 0.7, 0.7, 0.7,180, 0, -180, -180);
	letter_r(-1.7, 1.95, -0.6, right_middle_wing_rot,0,0,1, 0.7, 0.7, 0.7, 0 , 0 , 120,180, 0, -180, -180);
	letter_n(-2.0, 1.95, -0.9, right_middle_wing_rot,0,0,1, 0.7, 0.7, 0.7,180, 0, -180, -180);
	letter_r(-2.0, 1.95, -0.9, right_middle_wing_rot,0,0,1, 0.7, 0.7, 0.7, 0 , 0 , 120,180, 0, -180, -180);
	letter_n(-2.3, 1.95, -1.2, right_middle_wing_rot,0,0,1, 0.7, 0.7, 0.7,180, 0, -180, -180);
	letter_r(-2.3, 1.95, -1.2, right_middle_wing_rot,0,0,1, 0.7, 0.7, 0.7, 0 , 0 , 120,180, 0, -180, -180);
	draw_upper_right_wing(right_upper_wing_rot);
}

//upper right wing
void Drawing::draw_upper_right_wing(float right_upper_wing_rot)
{
	
	letter_n(-2.6, 1.95, -1.2,right_upper_wing_rot,0,0,1, 0.7, 0.7, 0.7,180, 0, -180, -180);
	letter_r(-2.6, 1.95, -1.2,right_upper_wing_rot,0,0,1, 0.7, 0.7, 0.7, 0 , 0 , 120,180, 0, -180, -180);
	letter_n(-2.9, 1.95, -1.5,right_upper_wing_rot,0,0,1, 0.7, 0.7, 0.7,180, 0, -180, -180);
	letter_r(-2.9, 1.95, -1.5,right_upper_wing_rot,0,0,1, 0.7, 0.7, 0.7, 0 , 0 , 120,180, 0, -180, -180);
	letter_n(-3.2, 1.95, -1.8,right_upper_wing_rot,0,0,1, 0.7, 0.7, 0.7,180, 0, -180, -180);
	letter_r(-3.2, 1.95, -1.8,right_upper_wing_rot,0,0,1, 0.7, 0.7, 0.7, 0 , 0 , 120,180, 0, -180, -180);
}
#endif