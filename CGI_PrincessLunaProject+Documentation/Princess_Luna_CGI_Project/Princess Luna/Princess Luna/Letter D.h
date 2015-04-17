/*********************************************************************************************************************************
Author: Nelio Lucas 
FileName: Letter D.h
Date: 2014-04-11
Operating system: Windows 7
Description : this file contains the points for creating the letter D
**********************************************************************************************************************************/
#ifndef Letter_D_H
#define Letter_D_H

#include "Letter Class.h"

/***********************/
/*    Draw letter D    */
/***********************/

						//These parameters change the position , size , angle and color of the D
void Letters::letter_d(float translateX, float translateY, float translateZ,float rotateAngle, float rotateX, float rotateY, float rotateZ ,float scaleX, float scaleY, float scaleZ, float red , float green , float blue)
{
	glPushMatrix();
	glTranslatef(translateX, translateY, translateZ);
	glRotatef(rotateAngle, rotateX, rotateY, rotateZ);
	glScalef(scaleX, scaleY, scaleZ);
	curveofd(1.7 , 0 , 2.0 , 0 , 180 , 5.0 , red , green , blue);
	       
	glPopMatrix();

}

void Letters::curveofd(double depth, double r1, double r2, double theta_start, double theta_stop, double theta_inc , float red, float green , float blue)
{
	// Function to draw 3D curve 
	// depth = depth centred round z=0
	// r1 = inner radius
	// r2 = outer radius
	// theta_start = start angle in degrees measured from x-axis
	// theta_stop = similar 

	double x, y, x1, x2, y1, y2, z, thet, z_front, z_back;
	int i=0;
	double radius=1.5, c=3.14159/180.0;
	z_front=depth/2; z_back=-depth/2;
	
	// draw rear face (away from viewer)
	glColor3f(red,green, blue);
	z=z_back;
	glBegin(GL_QUAD_STRIP);
	for(thet=theta_start; thet<=theta_stop;thet+=theta_inc) {
		x=cos(c*thet)*r2; y=sin(c*thet)*r2; glVertex3d(x,y,z);
		x=cos(c*thet)*r1; y=sin(c*thet)*r1; glVertex3d(x,y,z);
	}
	glEnd();

	// draw front face (closer to viewer)
	glColor3f(red,green, blue);
	z=z_front;
	glBegin(GL_QUAD_STRIP);
	for(thet=theta_start; thet<=theta_stop;thet+=theta_inc)	{
		x=cos(c*thet)*r1; y=sin(c*thet)*r1; glVertex3d(x,y,z);
		x=cos(c*thet)*r2; y=sin(c*thet)*r2; glVertex3d(x,y,z);
	}
	glEnd();

	// draw upper face
	glColor3f(red,green, blue);
	glBegin(GL_QUAD_STRIP);
	for(thet=theta_start; thet<=theta_stop;thet+=theta_inc) {
		x=cos(c*thet)*r2; y=sin(c*thet)*r2;
		z=z_front; glVertex3d(x,y,z);
		z=z_back;  glVertex3d(x,y,z);
	}
	glEnd();

	// draw lower face
	glBegin(GL_QUAD_STRIP);
	for(thet=theta_start; thet<=theta_stop;thet+=theta_inc)	{
		x=cos(c*thet)*r1; y=sin(c*thet)*r1;
		z=z_back; glVertex3d(x,y,z);
		z=z_front; glVertex3d(x,y,z);
	}
	glEnd();

	// draw bottom end - Fixed by Tom Methven (31/08/2012)
	glColor3f(red,green, blue);
	glBegin(GL_POLYGON);
		x1=cos(c*theta_start)*r1; y1=sin(c*theta_start)*r1;
		x2=cos(c*theta_start)*r2; y2=sin(c*theta_start)*r2;

		glVertex3d(x1,y1,z_front);
		glVertex3d(x2,y2,z_front);
		glVertex3d(x2,y2,z_back);
		glVertex3d(x1,y1,z_back);
	glEnd();

	// draw top end
	glBegin(GL_POLYGON);
		x1=cos(c*theta_stop)*r1; y1=sin(c*theta_stop)*r1;
		x2=cos(c*theta_stop)*r2; y2=sin(c*theta_stop)*r2;

		glVertex3d(x1,y1,z_front);
		glVertex3d(x2,y2,z_front);
		glVertex3d(x2,y2,z_back);
		glVertex3d(x1,y1,z_back);
	glEnd();

	//vertical section of the D
	glPushMatrix();
	glScalef(4,1.8,5.8);
	glRotated(90,0,0,1);
	glTranslated(0.4,0.5,0.256);
	vertical(red,green,blue);
	glPopMatrix();
	
}


//******************************************
/*    Draw vertical segment of letter L and D*/
//******************************************

void Letters::vertical(float red,float green,float blue)
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


	
	//glClear(GL_COLOR_BUFFER_BIT);

	//FRONT
	//Column1
	glBegin(GL_POLYGON);
	glColor3f(red,green,blue);
	//Red
	glVertex3f(-0.4 + x + a, 0.1 + y + b, z); //D
	glVertex3f(-0.1 + x + a, 0.1 + y + b, z); //C
	glVertex3f(-0.1 + x + a, -0.9 + y + b, z); //B
	glVertex3f(-0.4 + x + a, -0.9 + y + b, z); //A
	glEnd();

	//3D Sides

	//Left Long Side
	glBegin(GL_POLYGON);
	glColor3f(red,green,blue);
	//Blue
	glVertex3f(-0.4 + x + a, 0.1 + y + b, z); //D
	glVertex3f(-0.4 + x + a, 0.1 + y + b, -0.4); //D
	glVertex3f(-0.4 + x + a, -0.9 + y + b, -0.4); //A
	glVertex3f(-0.4 + x + a, -0.9 + y + b, z); //A
	glEnd();

	//Right Long Side
	glBegin(GL_POLYGON);
	glColor3f(red,green,blue);
	//White
	glVertex3f(-0.1 + x + a, 0.1 + y + b, z); //D
	glVertex3f(-0.1 + x + a, 0.1 + y + b, -0.4); //D
	glVertex3f(-0.1 + x + a, -0.9 + y + b, -0.4); //A
	glVertex3f(-0.1 + x + a, -0.9 + y + b, z); //A
	glEnd();

	//Top Cap
	glBegin(GL_POLYGON);
	glColor3f(red,green,blue);
	//White
	glVertex3f(-0.4 + x + a, 0.1 + y + b, z); //D
	glVertex3f(-0.4 + x + a, 0.1 + y + b, -0.4); //D
	glVertex3f(-0.1 + x + a, 0.1 + y + b, -0.4); //C
	glVertex3f(-0.1 + x + a, 0.1 + y + b, z); //C
	glEnd();
	
	//Bottom Cap
	glBegin(GL_POLYGON);
	glColor3f(red,green,blue);
	//Green
	glVertex3f(-0.1 + x + a, -0.9 + y + b, z); //B
	glVertex3f(-0.1 + x + a, -0.9 + y + b, -0.4); //B
	glVertex3f(-0.4 + x + a, -0.9 + y + b, -0.4); //A
	glVertex3f(-0.4 + x + a, -0.9 + y + b, z); //A
	glEnd();

	//REAR
	//Column1
	glBegin(GL_POLYGON);
	glColor3f(red,green,blue);
	//Red
	glVertex3f(-0.4 + x + a, 0.1 + y + b, -0.4); //D
	glVertex3f(-0.1 + x + a, 0.1 + y + b, -0.4); //C
	glVertex3f(-0.1 + x + a, -0.9 + y + b, -0.4); //B
	glVertex3f(-0.4 + x + a, -0.9 + y + b, -0.4); //A
	glEnd();
	
	//glFlush();

	
	 
	
	
}
//***********************************
//Draw horizontal segment of letter L 
//***********************************
void Letters::horizontal(float red , float green , float blue)
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


	
	//glClear(GL_COLOR_BUFFER_BIT);

	//FRONT
	//Column1
	glBegin(GL_POLYGON);
	glColor3f(red,green,blue);
	//Red
	glVertex3f(-0.4 + x + a, 0.1 + y + b, z); //D
	glVertex3f(-0.1 + x + a, 0.1 + y + b, z); //C
	glVertex3f(-0.1 + x + a, -0.9 + y + b, z); //B
	glVertex3f(-0.4 + x + a, -0.9 + y + b, z); //A
	glEnd();

	//3D Sides

	//Left Long Side
	glBegin(GL_POLYGON);
	glColor3f(red,green,blue);
	//Blue
	glVertex3f(-0.4 + x + a, 0.1 + y + b, z); //D
	glVertex3f(-0.4 + x + a, 0.1 + y + b, -0.4); //D
	glVertex3f(-0.4 + x + a, -0.9 + y + b, -0.4); //A
	glVertex3f(-0.4 + x + a, -0.9 + y + b, z); //A
	glEnd();

	//Right Long Side
	glBegin(GL_POLYGON);
	glColor3f(red,green,blue);
	//White
	glVertex3f(-0.1 + x + a, 0.1 + y + b, z); //D
	glVertex3f(-0.1 + x + a, 0.1 + y + b, -0.4); //D
	glVertex3f(-0.1 + x + a, -0.9 + y + b, -0.4); //A
	glVertex3f(-0.1 + x + a, -0.9 + y + b, z); //A
	glEnd();

	//Top Cap
	glBegin(GL_POLYGON);
	glColor3f(red,green,blue);
	//White
	glVertex3f(-0.4 + x + a, 0.1 + y + b, z); //D
	glVertex3f(-0.4 + x + a, 0.1 + y + b, -0.4); //D
	glVertex3f(-0.1 + x + a, 0.1 + y + b, -0.4); //C
	glVertex3f(-0.1 + x + a, 0.1 + y + b, z); //C
	glEnd();
	
	//Bottom Cap
	glBegin(GL_POLYGON);
	glColor3f(red,green,blue);
	//Green
	glVertex3f(-0.1 + x + a, -0.9 + y + b, z); //B
	glVertex3f(-0.1 + x + a, -0.9 + y + b, -0.4); //B
	glVertex3f(-0.4 + x + a, -0.9 + y + b, -0.4); //A
	glVertex3f(-0.4 + x + a, -0.9 + y + b, z); //A
	glEnd();

	//REAR
	//Column1
	glBegin(GL_POLYGON);
	glColor3f(red,green,blue);
	//Red
	glVertex3f(-0.4 + x + a, 0.1 + y + b, -0.4); //D
	glVertex3f(-0.1 + x + a, 0.1 + y + b, -0.4); //C
	glVertex3f(-0.1 + x + a, -0.9 + y + b, -0.4); //B
	glVertex3f(-0.4 + x + a, -0.9 + y + b, -0.4); //A
	glEnd();
	
	glFlush();
}


#endif