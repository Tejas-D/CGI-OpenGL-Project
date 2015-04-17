/*********************************************************************************************************************************
Author: Tyron Mcdonald
FileName: Letter J.h
Date: 2014-04-11
Operating system: Windows 7
Description : this file contains the points for creating the letter J
**********************************************************************************************************************************/
#ifndef Letter_J_H
#define Letter_J_H

#include "Letter Class.h"


/***********************/
/*    Draw letter J    */
/***********************/

						//These parameters change the position and size of the J
void Letters::letter_j(float translateX, float translateY, float translateZ,float rotateAngle, float rotateX, float rotateY, float rotateZ ,float scaleX, float scaleY, float scaleZ)
{
	//translation constants
	float x = -0.2;
	float y = 0;


	float a = -0.1;
	float b = -0.1;

	float c = x + a;
	float d = y + b;
	//3D 
	float zf = 0.1;
	float zr = 0.0;
	float zt = 0.1;

    
	
	//horizontal
	glPushMatrix();
	glTranslatef(translateX, translateY, translateZ);
	glRotatef(rotateAngle, rotateX, rotateY, rotateZ);
	glScalef(scaleX, scaleY, scaleZ);

	glPushMatrix();
	glScalef(2,2,1.9);
    glRotatef(0,0,0,0);
    glTranslatef(-0.1,0.5,0.0);

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 125);
	glVertex3f(-0.1 + x, 0.1 + y, zr); //D
	glVertex3f(0.9 + x, 0.1 + y, zr); //C
	glVertex3f(0.9 + x, -0.1 + y, zr); //B
	glVertex3f(-0.1 + x, -0.1 + y, zr); //A

	glEnd();


    glBegin(GL_POLYGON);

	glColor3f(0, 0, 125);
	glVertex3f(-0.1 + x , 0.1 + y , zf); //D
	glVertex3f(0.9 + x , 0.1 + y , zf); //C
	glVertex3f(0.9 + x , -0.1 + y , zf); //B
	glVertex3f(-0.1 + x , -0.1 + y , zf); //A

	glEnd();

//TOP
	glBegin(GL_POLYGON);
	//glPushMatrix();
	//glScalef(0.5, 0.5, 0.5);
	glColor3f(0 , 0, 125);
	glVertex3f(0.7, 0.1, zt); //B
	glVertex3f(0.7 , 0.1, 0.0); //C
	glVertex3f(-0.3 , 0.1, 0.0); //D
	glVertex3f(-0.3 , 0.1, zt); //A
	//glPopMatrix();
	glEnd();

//Bottom: Medium Base
	glBegin(GL_POLYGON);
	
	glColor3f(0 , 0, 125);
	glVertex3f(0.7, -0.1, zt); //B
	glVertex3f(0.7 , -0.1, 0.0); //C
	glVertex3f(-0.3 , -0.1, 0.0); //D
	glVertex3f(-0.3 , -0.1, zt); //A
	
	glEnd();

//upper side: right
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 125);
	glVertex3f(0.9 + x , 0.1 + y , zf); //D
	glVertex3f(0.9 + x , 0.1 + y , 0.0);//C
	glVertex3f(0.9 + x , -0.1 + y , 0.0);//B
	glVertex3f(0.9 + x , -0.1 + y , zf); //A
	glEnd();

	//upper side: left
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 125);
	glVertex3f(-0.1 + x , 0.1 + y , zf); //D
	glVertex3f(-0.1 + x , 0.1 + y , 0.0);//C
	glVertex3f(-0.1 + x , -0.1 + y , 0.0);//B
	glVertex3f(-0.1 + x , -0.1 + y , zf); //A
	glEnd();
	glPopMatrix();

	//verticle	
	glPushMatrix();
	glScalef(1,2,1.9);
	glRotatef(0,0,0,0);
	glTranslatef(0,0.5,0.0);


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 125);
	glVertex3f(0.3 + x, 0.1 + y, zr); //D
	glVertex3f(0.5 + x, 0.1 + y, zr); //C
	glVertex3f(0.5 + x, -0.9 + y, zr); //B
	glVertex3f(0.3 + x, -0.9 + y, zr); //A
	
	
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 125);
	glVertex3f(0.3 + x , 0.1 + y , zf); //D
	glVertex3f(0.5 + x , 0.1 + y , zf); //C
	glVertex3f(0.5 + x , -0.9 + y , zf); //B
	glVertex3f(0.3 + x , -0.9 + y , zf); //A
	glEnd();

//Bottom : Lower Base
	glBegin(GL_POLYGON);
	glColor3f(0 , 0 , 125);
	glVertex3f(0.5 + x , -0.9 + y , zf); //B
	glVertex3f(0.5 + x , -0.9 + y , 0.0); //C
	glVertex3f(0.3 + x , -0.9 + y , 0.0); //D
	glVertex3f(0.3 + x , -0.9 + y , zf); //A

	glEnd();

//lower side : left
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 125);
	glVertex3f(0.3 + x , -0.1 + y , zf); //D
	glVertex3f(0.3 + x , -0.1 + y , 0.0);//C
	glVertex3f(0.3 + x , -0.9 + y , 0.0);//B
	glVertex3f(0.3 + x , -0.9 + y , zf); //A
	glEnd();

//lower side : right
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 125);
	glVertex3f(0.5 + x , -0.1 + y , zf); //D
	glVertex3f(0.5 + x , -0.1 + y , 0.0);//C
	glVertex3f(0.5 + x , -0.9 + y , 0.0);//B
	glVertex3f(0.5 + x , -0.9 + y , zf); //A
	glEnd();
	glPopMatrix();

	//J curve
	glPushMatrix();
	glScalef(0.4,0.4,0.4);
	glRotatef(180,1,0,0);
	glTranslatef(-1.25,2,-0.2);
	curveofj(0.53,1.5, 2.0 , 0.0,180, 5.0); 
	glPopMatrix();


	glPopMatrix();

	glFlush();
				      

}
void Letters::curveofj(double depth, double r1, double r2, double theta_start, double theta_stop, double theta_inc)
{
	//Function to draw 3D curve 
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
	glColor3f(0, 0, 125);
	z=z_back;
	glBegin(GL_QUAD_STRIP);
	for(thet=theta_start; thet<=theta_stop;thet+=theta_inc) {
		x=cos(c*thet)*r2; y=sin(c*thet)*r2; glVertex3d(x,y,z);
		x=cos(c*thet)*r1; y=sin(c*thet)*r1; glVertex3d(x,y,z);
	}
	glEnd();

	// draw front face (closer to viewer)
	glColor3f(0, 0, 125);
	z=z_front;
	glBegin(GL_QUAD_STRIP);
	for(thet=theta_start; thet<=theta_stop;thet+=theta_inc)	{
		x=cos(c*thet)*r1; y=sin(c*thet)*r1; glVertex3d(x,y,z);
		x=cos(c*thet)*r2; y=sin(c*thet)*r2; glVertex3d(x,y,z);
	}
	glEnd();

	// draw upper face
	glColor3f(0, 0, 125);
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
	glColor3f(0, 0, 125);
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