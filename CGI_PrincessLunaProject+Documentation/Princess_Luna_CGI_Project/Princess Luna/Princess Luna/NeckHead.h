/*********************************************************************************************************************************
Author: Nelio Lucas
Date: 2014-04-11
Operating system: Windows 7
IDE : Microsoft Visual Studio 2012 for Windows Desktop
Description : this file contains the draw_head and draw_neck function definitions
**********************************************************************************************************************************/

#ifndef NECKHEAD_H
#define NECKHEAD_H

#include "Drawing Class.h"







/***********************/
/*    Draw Head    */
/***********************/

void Drawing::draw_head(float head_rot)
{	

	glPushMatrix();
	glTranslatef(0,-0.6,-1.2);
	glRotatef(head_rot,1,0,0); //articulation of head
	glScalef(1,1,1);
   
	
	//snout
	glPushMatrix();
	glTranslatef(0,4.2,1.555);
	glRotatef(-80,1,0,0);
	glScalef(0.6,1.0,0.6);
    letter_d(0,4,0,-90,0,1,0,0.5,0.5,0.5, 0.22 ,0.29 ,1.10);
	glPopMatrix();

	//head
	glPushMatrix();
	glTranslatef(0,2.7,3);
	glRotatef(-65,1,0,0);
	glScalef(1.2,1.2,1.2);
    letter_d(0,4,0,-90,0,1,0,0.5,0.5,0.5,0.22 ,0.29 ,1.10);
	glPopMatrix();

	
	//ears
	glPushMatrix();
	glTranslatef(0.4,5.85,-1.35);
	glRotatef(-150,1,0,0);
	glScalef(1,1,1);
	letter_j(0,0,0,90,0,1,0,0.5,0.5,0.5);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.4,5.85,-1.35);
	glRotatef(-150,1,0,0);
	glScalef(1,1,1);
	letter_j(0,0,0,90,0,1,0,0.5,0.5,0.5);
	glPopMatrix();

	//mouth
	glPushMatrix();
	glTranslatef(-0.26,4.9,-2.95);
	glRotatef(90,0,0,1);
	glScalef(0.2,0.54,1);
	horizontal(0,0,0);
	glPopMatrix();

	//nostrils
	glPushMatrix();
	glTranslatef(-0.21,5.2,-2.96);
	glRotatef(90,0,1,0);
	glScalef(0.05,0.05,0.1);
	curveofd(1.0 , 0.0 , 2.0 , 0.0 , 360 , 5.0, 0 ,0 ,0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.21,5.2,-2.96);
	glRotatef(90,0,1,0);
	glScalef(0.05,0.05,0.1);
	curveofd(1.0 , 0.0 , 2.0 , 0.0 , 360 , 5.0, 0 ,0 ,0);
	glPopMatrix();

	//eyes
	letter_o(0.5,5,-2.0,90,0,1,0,0.2,0.2,0.2 ,0.53 ,0.12 ,0.47);
	letter_o(0.5,5.0,-2.0,90,0,1,0,0.09,0.09,0.09 , 125 , 0 , 0);
	letter_d(0.5,5,-2.0,90,0,1,0,0.2001,0.2001,0.2001 ,0.22 ,0.29 ,0.63);
   

	letter_o(-0.5,5,-2.0,90,0,1,0,0.2,0.2,0.2 , 0.53 ,0.12 ,0.47);
	letter_o(-0.5,5.0,-2.0,90,0,1,0,0.09,0.09,0.09 , 125 , 0 , 0);
	letter_d(-0.5,5,-2.0,90,0,1,0,0.2001,0.2001,0.2001 ,0.22 ,0.29 ,0.63);
    letter_o(-0.5,5,-2.0,90,0,1,0,0.2,0.2,0.2,125 , 0 , 12);
	
	//horn
	glPushMatrix();
	glTranslatef(0,3.2,3.8);
	glRotatef(-45,1,0,0);
	glScalef(1,1,1);
	letter_t(0.2,5.5,-2.5,180,0,0,1,1,1,2);
	glPopMatrix();
	letter_i(0.27,5.5,-2.1,135,1,0,0,0.5,1.8,0.5);
	letter_i(0.165,5.5,-2.05,135,1,0,0,0.3,2.8,0.3);

	glPopMatrix();

}

/***********************/
/*    Draw Neck    */
/***********************/

void Drawing::draw_neck(float head_rot, float neck_rot, float bodymove)
{
	glPushMatrix();
	glTranslatef(0,bodymove,0);
	glRotatef(neck_rot,1,0,0);
		glScalef(1,1,1);
		letter_i(1.7,4,-1.7,-15,1,0,0,3.1,2.7,3);
		letter_i(1.1,4.7,-2.05,-15,1,0,0,2,2,2);
		draw_head(head_rot);
	glPopMatrix();
}

#endif