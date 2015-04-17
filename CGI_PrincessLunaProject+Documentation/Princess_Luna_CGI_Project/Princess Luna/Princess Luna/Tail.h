/*********************************************************************************************************************************
Author: Nelio Lucas
Date: 2014-04-11
Operating system: Windows 7
IDE : Microsoft Visual Studio 2012 for Windows Desktop
Description : this file contains the draw_upper_tail , draw_middle_tail and draw_lower_tail function definitions
**********************************************************************************************************************************/
#ifndef TAIL_H
#define TAIL_H

#include "Drawing Class.h"



/***********************/
/*        Tail         */
/***********************/
void Drawing::draw_upper_tail(float upper_tail_rot,float middle_tail_rot,float bodymove)
{
	glPushMatrix();
	glTranslatef(0,bodymove,0);
	glRotatef(upper_tail_rot,1,0,0);
	glScalef(1,1,1);
	
	letter_i(0.55,2.2,3,-70+upper_tail_rot,1,0,0,1,1,1);
	draw_middle_tail(middle_tail_rot);
	glPopMatrix();
}

//draw middle tail
void Drawing::draw_middle_tail(float middle_tail_rot)
{
	glPushMatrix();
	glTranslatef(0,0,0);
	glRotatef(middle_tail_rot,1,0,0);
	glScalef(1,1,1);
	letter_i(0.425,1.8,3.9,-70+middle_tail_rot,1,0,0,0.8,0.9,0.8);
	draw_lower_tail();
	glPopMatrix();
	
}

//draw lower tail
void Drawing::draw_lower_tail()
{
	glPushMatrix();
	glTranslatef(-0.02,-0.09,4.05);
	glRotatef(-65,1,0,0);
	glScalef(0.5,0.5,0.5);

	float aa =0.2;
	float bb =0.2;
	float cc =0.2;
	letter_j(0,0,3,45,0,1,0,aa,bb,cc);
	letter_j(0,0,3,90,0,1,0,aa,bb,cc);
	letter_j(0,0,3,135,0,1,0,aa,bb,cc);
	letter_j(0,0,3,180,0,1,0,aa,bb,cc);
	letter_j(0,0,3,225,0,1,0,aa,bb,cc);
	letter_j(0,0,3,270,0,1,0,aa,bb,cc);
	letter_j(0,0,3,315,0,1,0,aa,bb,cc);
	letter_j(0,0,3,360,0,1,0,aa,bb,cc);

	glPopMatrix();
	
}
#endif