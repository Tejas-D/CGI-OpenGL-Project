/*********************************************************************************************************************************
Author: Tejas Dwarkaram
FileName: Letter M.h
Date: 2014-04-11
Operating system: Windows 7
Description : this file contains the points for creating the letter M
**********************************************************************************************************************************/
#ifndef Letter_M_H
#define Letter_M_H

#include "Letter Class.h"

/***********************/
/*    Draw letter M    */
/***********************/
                        //These parameters change the position , size and angle of the M
void Letters::letter_m(float translateX, float translateY, float translateZ,float rotateAngle, float rotateX, float rotateY, float rotateZ ,float scaleX, float scaleY, float scaleZ)
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

	//FRONT
	//Column1
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex3f(-0.4 + x + a, 0.1 + y + b, z); //D
	glVertex3f(-0.1 + x + a, 0.1 + y + b, z); //C
	glVertex3f(-0.1 + x + a, -0.9 + y + b, z); //B
	glVertex3f(-0.4 + x + a, -0.9 + y + b, z); //A
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex3f(-0.4 + x + a, 0.1 + y + b, z); //D
	glVertex3f(-0.1 + x + a, 0.1 + y + b, z); //C
	glVertex3f(0.8 + x + a, -0.9 + y + b, z); //B
	glVertex3f(0.5 + x + a, -0.9 + y + b, z); //A
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex3f(0.8 + x + a, -0.9 + y + b, z); //D
	glVertex3f(0.5 + x + a, -0.9 + y + b, z); //C
	glVertex3f(1.5 + x + a, 0.1 + y + b, z); //B
	glVertex3f(1.8 + x + a, 0.1 + y + b, z); //A
	glEnd();

	//Column2
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex3f(1.5 + x + a, 0.1 + y + b, z); //D
	glVertex3f(1.8 + x + a, 0.1 + y + b, z); //C
	glVertex3f(1.8 + x + a, -0.9 + y + b, z); //B
	glVertex3f(1.5 + x + a, -0.9 + y + b, z); //A
	glEnd();


	//3D Sides
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex3f(-0.4 + x + a, 0.1 + y + b, z); //D
	glVertex3f(-0.4 + x + a, 0.1 + y + b, -0.4); //D
	glVertex3f(-0.4 + x + a, -0.9 + y + b, -0.4); //A
	glVertex3f(-0.4 + x + a, -0.9 + y + b, z); //A
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex3f(1.8 + x + a, 0.1 + y + b, z); //C
	glVertex3f(1.8 + x + a, 0.1 + y + b, -0.4); //C
	glVertex3f(1.8 + x + a, -0.9 + y + b, -0.4); //B
	glVertex3f(1.8 + x + a, -0.9 + y + b, z); //B
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex3f(-0.4 + x + a, 0.1 + y + b, z); //D
	glVertex3f(-0.4 + x + a, 0.1 + y + b, -0.4); //D
	glVertex3f(-0.1 + x + a, 0.1 + y + b, -0.4); //C
	glVertex3f(-0.1 + x + a, 0.1 + y + b, z); //C
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex3f(-0.1 + x + a, -0.9 + y + b, z); //B
	glVertex3f(-0.1 + x + a, -0.9 + y + b, -0.4); //B
	glVertex3f(-0.4 + x + a, -0.9 + y + b, -0.4); //A
	glVertex3f(-0.4 + x + a, -0.9 + y + b, z); //A
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex3f(1.5 + x + a, 0.1 + y + b, z); //D
	glVertex3f(1.5 + x + a, 0.1 + y + b, -0.4); //D
	glVertex3f(1.8 + x + a, 0.1 + y + b, -0.4); //C
	glVertex3f(1.8 + x + a, 0.1 + y + b, z); //D
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex3f(-0.4 + x + a, 0.1 + y + b, z); //D
	glVertex3f(-0.4 + x + a, 0.1 + y + b, -0.4); //D
	glVertex3f(0.5 + x + a, -0.9 + y + b, -0.4); //A
	glVertex3f(0.5 + x + a, -0.9 + y + b, z); //A
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex3f(-0.1 + x + a, 0.1 + y + b, z); //C
	glVertex3f(-0.1 + x + a, 0.1 + y + b, -0.4); //C
	glVertex3f(0.8 + x + a, -0.9 + y + b, -0.4); //B
	glVertex3f(0.8 + x + a, -0.9 + y + b, z); //B
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex3f(0.8 + x + a, -0.9 + y + b, z); //D
	glVertex3f(0.8 + x + a, -0.9 + y + b, -0.4); //D
	glVertex3f(1.8 + x + a, 0.1 + y + b, -0.4); //A
	glVertex3f(1.8 + x + a, 0.1 + y + b, z); //A
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex3f(0.5 + x + a, -0.9 + y + b, z); //C
	glVertex3f(-0.1 + x + a, 0.1 + y + b, -0.4); //C
	glVertex3f(0.8 + x + a, -0.9 + y + b, -0.4); //B
	glVertex3f(1.5 + x + a, 0.1 + y + b, z); //B
	glEnd();



	//Column2
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex3f(1.8 + x + a, -0.9 + y + b, z); //B
	glVertex3f(1.8 + x + a, -0.9 + y + b, -0.4); //B
	glVertex3f(1.5 + x + a, -0.9 + y + b, -0.4); //A
	glVertex3f(1.5 + x + a, -0.9 + y + b, z); //A
	glEnd();


	//REAR
	//Column1
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex3f(-0.4 + x + a, 0.1 + y + b, -0.4); //D
	glVertex3f(-0.1 + x + a, 0.1 + y + b, -0.4); //C
	glVertex3f(-0.1 + x + a, -0.9 + y + b, -0.4); //B
	glVertex3f(-0.4 + x + a, -0.9 + y + b, -0.4); //A
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex3f(-0.4 + x + a, 0.1 + y + b, -0.4); //D
	glVertex3f(-0.1 + x + a, 0.1 + y + b, -0.4); //C
	glVertex3f(0.8 + x + a, -0.9 + y + b, -0.4); //B
	glVertex3f(0.5 + x + a, -0.9 + y + b, -0.4); //A
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex3f(0.8 + x + a, -0.9 + y + b, -0.4); //D
	glVertex3f(0.5 + x + a, -0.9 + y + b, -0.4); //C
	glVertex3f(1.5 + x + a, 0.1 + y + b, -0.4); //B
	glVertex3f(1.8 + x + a, 0.1 + y + b, -0.4); //A
	glEnd();

	//Column2
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex3f(1.5 + x + a, 0.1 + y + b, -0.4); //D
	glVertex3f(1.8 + x + a, 0.1 + y + b, -0.4); //C
	glVertex3f(1.8 + x + a, -0.9 + y + b, -0.4); //B
	glVertex3f(1.5 + x + a, -0.9 + y + b, -0.4); //A
	glEnd();

	glPopMatrix();

	glFlush();
}


#endif