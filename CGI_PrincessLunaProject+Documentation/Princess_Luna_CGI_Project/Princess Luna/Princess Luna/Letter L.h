/*********************************************************************************************************************************
Author: Tyron Mcdonald
FileName: Letter L.h
Date: 2014-04-11
Operating system: Windows 7
Description : this file contains the points for creating the letter L
**********************************************************************************************************************************/
#ifndef Letter_L_H
#define Letter_L_H

#include "Letter Class.h"
						//These parameters change the position , size , angle and color of the L
void Letters::letter_l(float translateX, float translateY, float translateZ,float rotateAngle, float rotateX, float rotateY, float rotateZ ,float scaleX, float scaleY, float scaleZ , float red , float green ,float blue)
{
	//VERTICAL SEGMENT OF THE L
	glPushMatrix();
glTranslatef(translateX, translateY, translateZ);
	glRotatef(rotateAngle, rotateX, rotateY, rotateZ);
	glScalef(scaleX, scaleY, scaleZ);
	vertical(red,green,blue);
	
	//HORIZONTAL SEGMENT OF THE L
	glPushMatrix();
		glScalef(1,1,1);
		glRotatef(90,0,0,1);
		glTranslatef(-0.3,0.7,0);
		horizontal(red,green,blue);
		glPopMatrix();
	glPopMatrix();
}

#endif