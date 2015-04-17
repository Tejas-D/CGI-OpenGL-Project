/*********************************************************************************************************************************
Author: Nelio Lucas 
FileName: Letter O.h
Date: 2014-04-11
Operating system: Windows 7
Description : this file contains the points for creating the letter O
**********************************************************************************************************************************/
#ifndef Letter_O_H
#define Letter_O_H

#include "Letter Class.h"

/***********************************************/
/*    Draw letter O and the 360 curve function */
/************************************************/

						//These parameters change the position , size , angle and color of the O
void Letters::letter_o(float translateX, float translateY, float translateZ,float rotateAngle, float rotateX, float rotateY, float rotateZ ,float scaleX, float scaleY, float scaleZ ,  float red , float green , float blue)
{
	glPushMatrix();
	glTranslatef(translateX, translateY, translateZ);
	glRotatef(rotateAngle, rotateX, rotateY, rotateZ);
	glScalef(scaleX, scaleY, scaleZ);
	curve_o(1.0 , 1.5 , 2.0 , 0.0 , 360 , 5.0 , red , green , blue);
	glPopMatrix();
}


void Letters::curve_o(double depth, double r1, double r2, double theta_start, double theta_stop, double theta_inc , float red , float green , float blue)
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
	glColor3f(red, green, blue);
	z=z_back;
	glBegin(GL_QUAD_STRIP);
	for(thet=theta_start; thet<=theta_stop;thet+=theta_inc) {
		x=cos(c*thet)*r2; y=sin(c*thet)*r2; glVertex3d(x,y,z);
		x=cos(c*thet)*r1; y=sin(c*thet)*r1; glVertex3d(x,y,z);
	}
	glEnd();

	// draw front face (closer to viewer)
	glColor3f(red, green, blue);
	z=z_front;
	glBegin(GL_QUAD_STRIP);
	for(thet=theta_start; thet<=theta_stop;thet+=theta_inc)	{
		x=cos(c*thet)*r1; y=sin(c*thet)*r1; glVertex3d(x,y,z);
		x=cos(c*thet)*r2; y=sin(c*thet)*r2; glVertex3d(x,y,z);
	}
	glEnd();

	// draw upper face
	glColor3f(red, green, blue);
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
	glColor3f(red, green, blue);
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
}




#endif