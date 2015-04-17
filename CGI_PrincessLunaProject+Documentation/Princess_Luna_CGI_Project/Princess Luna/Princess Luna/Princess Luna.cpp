
/*********************************************************************************************************************************
Author: Nelio Lucas , Tyron McDonald , Tejas Dwarkaram
FileName: Dragon_Source.cpp
Date: 2014-04-11
Operating system: Windows 7
Description : this file contains the main function that displays the 3D dragon onto the screen
**********************************************************************************************************************************/
#include "Drawing class.h"



//======================================================
// MAIN PROGRAM 
//======================================================
int main(int argc, char **argv)
{
	Drawing o;
	// Create and Name window
	// Add Display , Mouse CallBacks and Keyboard Callback 
    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Princess Luna");
	glutReshapeFunc(o.reshapeCallBack);
	glutDisplayFunc(o.displayCallback);
	glutMouseFunc(o.mouseClickCallback);
	glutMotionFunc(o.mouseMotionCallback);
	glutKeyboardFunc(o.keyboardCallBack);
    o.menu();

	glClearColor(0.0, 0.0, 0.34, 1.0);
	glColor3f(0.0, 0.0, 12.0);
	glEnable(GL_DEPTH_TEST); 
	glutMainLoop();
	return 0;
}
