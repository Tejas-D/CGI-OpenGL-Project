/*********************************************************************************************************************************
Author: Tejas Dwarkaram
FileName: Letter R.h
Date: 2014-04-11
Operating system: Windows 7
Description : this file contains the points for creating the letter R
**********************************************************************************************************************************/
#ifndef Letter_R_H
#define Letter_R_H

#include "Letter Class.h"


/***********************/
/*    Draw letter R    */
/***********************/

                        //These parameters change the position , size , angle and color of the R
void Letters::letter_r(float translateX, float translateY, float translateZ,float rotateAngle, float rotateX, float rotateY, float rotateZ ,float scaleX, float scaleY, float scaleZ ,  float red , float green , float blue , float angle , bool Xaxis , bool Yaxis ,bool Zaxis)
{
	
	
	
	//translation constants
	float x = -0.2;
	float y = 0;


	float a = -0.1;
	float b = -0.1;

	float c = x + a;
	float d = y + b;
	//3D 
	float z = -0.1;
	
	glPushMatrix();
	glTranslatef(translateX, translateY, translateZ);
	glRotatef(rotateAngle, rotateX, rotateY, rotateZ);
	glScalef(scaleX, scaleY, scaleZ);

	glPushMatrix();
	glTranslatef(0,0,0);
	glRotatef(angle, Xaxis, Yaxis, Zaxis);
	glScalef(1,1,1);

	glBegin(GL_POLYGON);
	glColor3f(0.22 ,0.29 ,0.63);
	glVertex3f(-0.4 + x + a, 0.9 + y + b, z); //D
	glVertex3f(-0.1 + x + a, 0.9 + y + b, z); //C
	glVertex3f(-0.1 + x + a, -0.9 + y + b, z); //B
	glVertex3f(-0.4 + x + a, -0.9 + y + b, z); //A
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.22 ,0.29 ,0.63);
	glVertex3f(-0.4 + x + a, 0.1 + y + b, z); //D
	glVertex3f(-0.1 + x + a, 0.1 + y + b, z); //C
	glVertex3f(0.8 + x + a, -0.9 + y + b, z); //B
	glVertex3f(0.5 + x + a, -0.9 + y + b, z); //A
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.22 ,0.29 ,0.63);
	glVertex3f(-0.4 + x + a, 0.9 + y + b, z); //D
	glVertex3f(-0.4 + x + a, 0.9 + y + b, -0.4); //D
	glVertex3f(-0.4 + x + a, -0.9 + y + b, -0.4); //A
	glVertex3f(-0.4 + x + a, -0.9 + y + b, z); //A
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.22 ,0.29 ,0.63);
	glVertex3f(-0.1 + x + a, 0.9 + y + b, z); //C
	glVertex3f(-0.1 + x + a, 0.9 + y + b, -0.4); //C
	glVertex3f(-0.1 + x + a, -0.9 + y + b, -0.4); //B
	glVertex3f(-0.1 + x + a, -0.9 + y + b, z); //B
	glEnd();


	glPushMatrix();
	glScalef(1, 1, 1);
	glRotatef(0, 0, 0, 0);
	glTranslatef(-0.4, 0.1, -0.25);
	//Draw curve using code in 3DCurve.cpp
	curve_o(0.3,          //depth  
		0.5,			 //inner radius
		0.7,			//outer radius
		-60.0,          //start angle
		93,				//stop angle
		4.0 , red , green , blue);			 //anular increments
	glPopMatrix();


	glBegin(GL_POLYGON);
	glColor3f(0.22 ,0.29 ,0.63);
	glVertex3f(-0.1 + x + a, 0.1 + y + b, z); //C
	glVertex3f(-0.1 + x + a, 0.1 + y + b, -0.4); //C
	glVertex3f(0.8 + x + a, -0.9 + y + b, -0.4); //B
	glVertex3f(0.8 + x + a, -0.9 + y + b, z); //B
	glEnd();


	

	glBegin(GL_POLYGON);
	glColor3f(0.22 ,0.29 ,0.63);
	glVertex3f(0.8 + x + a, -0.9 + y + b, z); //B
	glVertex3f(0.8 + x + a, -0.9 + y + b, -0.4); //B
	glVertex3f(0.5 + x + a, -0.9 + y + b, -0.4); //A
	glVertex3f(0.5 + x + a, -0.9 + y + b, z); //A
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.22 ,0.29 ,0.63);
	glVertex3f(-0.4 + x + a, 0.9 + y + b, -0.4); //D
	glVertex3f(-0.1 + x + a, 0.9 + y + b, -0.4); //C
	glVertex3f(-0.1 + x + a, -0.9 + y + b, -0.4); //B
	glVertex3f(-0.4 + x + a, -0.9 + y + b, -0.4); //A
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.22 ,0.29 ,0.63);
	glVertex3f(-0.4 + x + a, 0.1 + y + b, -0.4); //D
	glVertex3f(-0.4 + x + a, 0.1 + y + b, z); //D
	glVertex3f(-0.1 + x + a, 0.1 + y + b, z); //C
	glVertex3f(-0.1 + x + a, 0.1 + y + b, -0.4); //C
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.22 ,0.29 ,0.63);
	glVertex3f(-0.4 + x + a, 0.1 + y + b, -0.4); //D
	glVertex3f(-0.1 + x + a, 0.1 + y + b, -0.4); //C
	glVertex3f(0.8 + x + a, -0.9 + y + b, -0.4); //B
	glVertex3f(0.5 + x + a, -0.9 + y + b, -0.4); //A
	glEnd();

	glPopMatrix();
	glPopMatrix();
	glFlush();
}

#endif