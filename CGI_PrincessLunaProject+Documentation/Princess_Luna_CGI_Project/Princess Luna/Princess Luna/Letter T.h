/*********************************************************************************************************************************
Author: Nelio Lucas 
FileName: Letter T.h
Date: 2014-04-11
Operating system: Windows 7
Description : this file contains the points for creating the letter T
**********************************************************************************************************************************/
#ifndef Letter_T_H
#define Letter_T_H

#include "Letter Class.h"


/***********************/
/*    Draw letter T    */
/***********************/
							//These parameters change the position , size and of the T
void Letters::letter_t(float translateX, float translateY, float translateZ,float rotateAngle, float rotateX, float rotateY, float rotateZ ,float scaleX, float scaleY, float scaleZ)
{
	//translation constants
	float x = -0.2;
	float y = 0;

	
	float a = -0.1;
	float b = -0.1;

	float c = x + a;
	float d = y + b;
	//3D 
	
	
	float z = 0.1;

	glPushMatrix();
	glTranslatef(translateX, translateY, translateZ);
	glRotatef(rotateAngle, rotateX, rotateY, rotateZ);
	glScalef(scaleX, scaleY, scaleZ);

	//REAR
	//glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_POLYGON);

	glColor3f(0.22 ,0.29 ,0.63);
	glVertex3f(-0.1 + x, 0.1 + y, 0.0); //D
	glVertex3f(0.9 + x, 0.1 + y, 0.0); //C
	glVertex3f(0.9 + x, -0.1 + y, 0.0); //B
	glVertex3f(-0.1 + x, -0.1 + y, 0.0); //A

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.22 ,0.29 ,0.63);
	glVertex3f(0.3 + x, 0.1 + y, 0.0); //D
	glVertex3f(0.5 + x, 0.1 + y, 0.0); //C
	glVertex3f(0.5 + x, -0.9 + y, 0.0); //B
	glVertex3f(0.3 + x, -0.9 + y, 0.0); //A

	glEnd();


	//FRONT
	glBegin(GL_POLYGON);

	glColor3f(0.22 ,0.29 ,0.63);
	glVertex3f(-0.1 + x , 0.1 + y , z); //D
	glVertex3f(0.9 + x , 0.1 + y , z); //C
	glVertex3f(0.9 + x , -0.1 + y , z); //B
	glVertex3f(-0.1 + x , -0.1 + y , z); //A

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.22 ,0.29 ,0.63);
	glVertex3f(0.3 + x , 0.1 + y , z); //D
	glVertex3f(0.5 + x , 0.1 + y , z); //C
	glVertex3f(0.5 + x , -0.9 + y , z); //B
	glVertex3f(0.3 + x , -0.9 + y , z); //A
	glEnd();

	//TOP
	glBegin(GL_POLYGON);
	//glPushMatrix();
	//glScalef(0.5, 0.5, 0.5);
	glColor3f(0.22 ,0.29 ,0.63);
	glVertex3f(0.7, 0.1, z); //B
	glVertex3f(0.7 , 0.1, 0.0); //C
	glVertex3f(-0.3 , 0.1, 0.0); //D
	glVertex3f(-0.3 , 0.1, z); //A
	//glPopMatrix();
	glEnd();

	//Bottom : Lower Base
	glBegin(GL_POLYGON);
	glColor3f(0.22 ,0.29 ,0.63);
	glVertex3f(0.5 + x , -0.9 + y , z); //B
	glVertex3f(0.5 + x , -0.9 + y , 0.0); //C
	glVertex3f(0.3 + x , -0.9 + y , 0.0); //D
	glVertex3f(0.3 + x , -0.9 + y , z); //A

	glEnd();

	//Bottom: Medium Base
	glBegin(GL_POLYGON);
	
	glColor3f(0.22 ,0.29 ,0.63);
	glVertex3f(0.7, -0.1, z); //B
	glVertex3f(0.7 , -0.1, 0.0); //C
	glVertex3f(-0.3 , -0.1, 0.0); //D
	glVertex3f(-0.3 , -0.1, z); //A
	
	glEnd();

	//lower side : left
	glBegin(GL_POLYGON);
	glColor3f(0.22 ,0.29 ,0.63);
	glVertex3f(0.3 + x , -0.1 + y , z); //D
	glVertex3f(0.3 + x , -0.1 + y , 0.0);//C
	glVertex3f(0.3 + x , -0.9 + y , 0.0);//B
	glVertex3f(0.3 + x , -0.9 + y , z); //A
	glEnd();
	
	//lower side : right
	glBegin(GL_POLYGON);
	glColor3f(0.22 ,0.29 ,0.63);
	glVertex3f(0.5 + x , -0.1 + y , z); //D
	glVertex3f(0.5 + x , -0.1 + y , 0.0);//C
	glVertex3f(0.5 + x , -0.9 + y , 0.0);//B
	glVertex3f(0.5 + x , -0.9 + y , z); //A
	glEnd();

	//upper side: right
	glBegin(GL_POLYGON);
	glColor3f(0.22 ,0.29 ,0.63);
	glVertex3f(0.9 + x , 0.1 + y , z); //D
	glVertex3f(0.9 + x , 0.1 + y , 0.0);//C
	glVertex3f(0.9 + x , -0.1 + y , 0.0);//B
	glVertex3f(0.9 + x , -0.1 + y , z); //A
	glEnd();

	//upper side: left
	glBegin(GL_POLYGON);
	glColor3f(0.22 ,0.29 ,0.63);
	glVertex3f(-0.1 + x , 0.1 + y , z); //D
	glVertex3f(-0.1 + x , 0.1 + y , 0.0);//C
	glVertex3f(-0.1 + x , -0.1 + y , 0.0);//B
	glVertex3f(-0.1 + x , -0.1 + y , z); //A
	glEnd();

	glPopMatrix();

	glFlush();

}

#endif