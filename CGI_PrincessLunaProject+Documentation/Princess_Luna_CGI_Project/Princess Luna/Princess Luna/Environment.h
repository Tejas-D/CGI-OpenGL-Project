/*********************************************************************************************************************************
Author: Nelio Lucas 
Date: 2014-04-11
Operating system: Windows 7
IDE : Microsoft Visual Studio 2012 for Windows Desktop
Description : this file contains the drawMoon , DrawFloor and gridLines function definitions
**********************************************************************************************************************************/

#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include "Drawing Class.h"

/***********************/
/*    Draw Moon*/
/***********************/
void Drawing::drawMoon()
{
	for(int x =0; x < 360 ; x++)
		letter_o(8,8,-1.5,x,0,1,0,0.4,0.4,0.4,255.0 ,255.0 ,0);
	
}

/***********************/
/*    Draw Floor   */
/***********************/

void Drawing::drawFloor()
{
	
	glPushMatrix(); 
		glTranslatef(0, -1.1, 0); //draw slightly below y=0 so we can see grid
		glScalef(ground,ground,ground); //variables for adding and removing
		glBegin(GL_POLYGON);
			glColor3f(.75,.75,.75);
			glVertex3f(-5,0,5);
			glVertex3f(-5,0,-5);
			glVertex3f(5,0,-5);
			glVertex3f(5,0,5);
		glEnd();
	glPopMatrix();
}

/***********************/
/*    Draw Axis        */
/***********************/
void Drawing::gridLines(void)
{

	glPushMatrix();
	glScalef(axis,axis,axis);
	float offset; //int gd;
	glBegin(GL_LINES);
		glColor3f(255, 255, 255);
		glVertex3f(-20, 0, 0);					
		glVertex3f(+20, 0, 0);					
		glVertex3f( 0 ,-20, 0);				    	
		glVertex3f(	0, +20, 0);
		glVertex3f( 0, 0,-20);				    	
		glVertex3f(	0, 0, +20);

	glEnd();
	
	glLineStipple(1, 0xAAAA); //line style = fine dots
	glEnable(GL_LINE_STIPPLE);

	glBegin(GL_LINES);
		
		if (x_y_display) {glColor3f(0.0,0.7,0.7);
		for (offset=-10.0;offset<10.1;offset++){
			//draw lines in x-y plane
			glVertex3f(-10.0, offset, 0.0);					// Top Left
			glVertex3f(+10.0, offset, 0.0);					// Top Right
			glVertex3f( offset,-10, 0.0);					// Bottom Right
			glVertex3f(	offset,+10.0, 0.0);					// Bottom Left
		}}

		if (y_z_display) {glColor3f(0.7,0.0,0.7);
		for (offset=-10.0;offset<10.1;offset++){
			//draw lines in y-z plane
			glVertex3f( 0, offset, -10);					
			glVertex3f(	0, offset, 10.0);
			glVertex3f( 0, -10, offset);					
			glVertex3f(	0, 10, offset);
		}}

		if (x_z_display) {glColor3f(0.7,0.7,0.0);
		for (offset=-10.0;offset<10.1;offset++){
			//draw lines in x-z plane
			glVertex3f( offset, 0, -10);					
			glVertex3f(	offset, 0, 10.0);
			glVertex3f( -10, 0, offset);					
			glVertex3f(	10, 0, offset);
		}}

	glEnd();
	glDisable(GL_LINE_STIPPLE);
	glPopMatrix();

}

#endif
