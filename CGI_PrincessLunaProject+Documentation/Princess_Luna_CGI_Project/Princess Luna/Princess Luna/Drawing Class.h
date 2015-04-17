/*********************************************************************************************************************************
Author: Nelio Lucas , Tyron McDonald , Tejas Dwarkaram
FileName: Drawing class.h
Date: 2014-04-11
Operating system: Windows 7
Description : this file contains all the class and all the function declarations used for creating the body parts that builds
the 3D model of princess luna
**********************************************************************************************************************************/

#include "Body.h"
#include "Environment.h"
#include "Left front leg.h"
#include "Left hind leg.h"
#include "Right front leg.h"
#include "Right Hind leg.h"
#include "Lower left wing.h"
#include "Lower right wing.h"
#include "Luna.h"
#include "Tail.h"
#include "NeckHead.h"

#ifndef Drawing_class_H
#define Drawing_class_H

#include "Letter Class.h"
#include "TitleFrame.h"



//======================================================
// GLOBAL VARIABLES 
//======================================================

//floor and grid display
int dont_display_floor=0; 
int x_y_display=0, y_z_display=0, x_z_display=0;

//for view control
static float G_theta[3]; // View X,Y,Z
static float zoom=0.25;

bool MousePressed; // Used in Mouse Drag to change the Viewpoint
float pitch0, yaw0;
int mouseX0, mouseY0;

//rotation and translation of body parts 
static float neck_rot=0.0;
static float head_rot= 0.0;
static float upper_tail_rot=0.0; 
static float middle_tail_rot=0.0; 
static float lower_tail_rot =0.0; 
static float left_lower_wing_rot = 0.0;  
static float left_middle_wing_rot = 0.0;
static float left_upper_wing_rot =0.0; 
static float right_lower_wing_rot = 0.0; 
static float right_middle_wing_rot= 0.0; 
static float right_upper_wing_rot = 0.0;
static float legmove = 0.0;
static float bodymove = 0.0;
bool allrot = false;
bool legs = false;
bool body = false;
bool neck_u= false;
bool head = false;
bool left_low_wing = false;
bool left_mid_wing = false;
bool left_up_wing = false;
bool tail = false;
bool right_low_wing = false;
bool right_mid_wing = false;
bool right_up_wing = false;
//displaying and removing floor and axis
bool ground = true;
bool axis = true;

class Drawing:Letters
{
   public:
	     //drawing the scene(luna) , body , neck and head
	     static void luna(float,float,float,float,float,float,float,float,float,float, float, float, float );
	     static void draw_body(float);
	     static void draw_neck(float,float,float);
	     static void draw_head(float);


	   //LEFT HIND LEG
	    static void draw_upper_hind_left_leg(float);
	    static void draw_lower_hind_left_leg();

	   //RIGHT HIND LEG
	       static void draw_upper_hind_right_leg(float);
	       static void draw_lower_hind_right_leg();

	   //LEFT FRONT LEG
	        static void draw_upper_front_left_leg(float);
	        static void  draw_lower_front_left_leg();

	   //RIGHT FRONT LEG
	        static void draw_upper_front_right_leg(float);
	        static void draw_lower_front_right_leg();

	   //TAIL
			static void draw_upper_tail(float,float,float);
			static void draw_middle_tail(float);
			static void draw_lower_tail();

	   //LEFT WING
			static void draw_lower_left_wing(float, float,float);
	        static void draw_middle_left_wing(float,float);
			static void draw_upper_left_wing(float);

	   //RIGHT WING
			static void draw_lower_right_wing(float,float,float);
			static void draw_middle_right_wing(float,float);
			static void draw_upper_right_wing(float);

       static void drawFloor();
	   static void drawMoon();
	   static void viewControl();
	   static void displayCallback();
	   static void reshapeCallBack(int w , int h);
	   static void mouseMotionCallback(int x , int y);
	   static void mouseClickCallback(int button , int state , int x , int y);
	   static void gridLines(void);
	   static void idleCallBack();
	   static void keyboardCallBack(unsigned char, int , int );
	   static void menu();

	   

};

/***********************/
/*    Draw Menu        */
/***********************/

void Drawing::menu()
{
	string title = "3D model of Princess Luna";
	frame(title);
	cout << endl << endl;
	cout << "Left Mouse Button & Drag - Changes the View.\n" << endl;
	cout <<"Key 'A/a' : Animate/Stop Animation "<< endl;
	cout <<"Key 'Z'   : Zoom in." << endl;
	cout <<"Key 'X'   : Zoom out" << endl;
	cout <<"Key 'G/g' : Display axis/Remove axis" << endl;
	cout <<"Key 'F/f' : Display floor/Remove floor " << endl;
	cout <<"Key 'M'   : Redisplay Menu " << endl;
	cout <<"Key 'E'   : Exit the program " << endl;
	//console color
	system("COLOR 29");

}


//======================================================
// KEYBOARD CALLBACK ROUTINE 
//======================================================
void Drawing::keyboardCallBack(unsigned char key, int x , int y)
{
	
	switch(key)
	{
	case 'A':
		glutIdleFunc(idleCallBack);printf("Keyboard call back: key=%c, x=%d, y=%d \n", key, x, y);
		cout << "\n Animation ON" << endl;
	break;
	case 'a':
		glutIdleFunc(NULL);printf("Keyboard call back: key=%c, x=%d, y=%d \n", key, x, y);
		cout << "\n Animation OFF" << endl;
	break;
	case 'Z':
		zoom += 0.1;printf("Keyboard call back: key=%c, x=%d, y=%d \n", key, x, y);
		cout << "zoomed in by " << zoom << " "<< "units" << endl;
	break;
	case 'X':
		zoom -= 0.1;printf("Keyboard call back: key=%c, x=%d, y=%d \n", key, x, y);
		cout << "zoomed out by "<< zoom <<" units" << endl;
	break;
	case 'G':
		axis = true;
		cout << "\n Grid ON" << endl;
	break;
	case 'g':
		axis = false;
		cout << "\n Grid OFF" << endl;
	break;
	case 'F':
		ground = true;
		cout << "\n Floor ON" << endl;
	break;
	case 'f' :
		ground = false;
		cout << "\n Floor OFF" << endl;
	break;
	case 'E':
		exit(0);
	break;
	case 'M':
		system("CLS");
		menu();
	break;
	
	default:
		cout << "\n Wrong Keyboard entry , please enter A, a, Z, X, G, g, F, f, E or M" << endl;
	}

	glutPostRedisplay();
}

//======================================================
// VIEW CONTROL ROUTINE 
//======================================================
void Drawing::viewControl()
{
	//Resets the matrix
	glLoadIdentity();

	//Rotate entire model 
	glRotatef(G_theta[0], 1.0, 0.0, 0.0);
	glRotatef(G_theta[1], 0.0, 1.0, 0.0);
	glRotatef(G_theta[2], 0.0, 0.0, 1.0);

	//zoom (NB glOrtho projection)
	glScalef(zoom,zoom,zoom);
}

//======================================================
// DISPLAY CALLBACK ROUTINE 
//======================================================
void Drawing::displayCallback(void)
{
	// display callback,
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//movement of scene
	viewControl();

	//draws scene
	glEnable(GL_DEPTH_TEST); 
	luna(neck_rot,head_rot ,  upper_tail_rot ,  middle_tail_rot ,  lower_tail_rot ,  left_lower_wing_rot ,  left_middle_wing_rot,  left_upper_wing_rot,   right_lower_wing_rot ,  right_middle_wing_rot, right_upper_wing_rot, legmove , bodymove );
	glFlush();
	glutSwapBuffers();
}

//======================================================
// DISPLAY RESHAPE CALLBACK ROUTINE 
//======================================================
void Drawing::reshapeCallBack(int w, int h)
{
    glViewport(0, 0, w, h);
	gluPerspective(90,60,1,100);
    glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		if (w <= h)
			glOrtho(-2.0, 2.0, -2.0 * (float) h / (float) w,
				2.0 * (float) h / (float) w, -10.0, 10.0);
		else
			glOrtho(-2.0 * (float) w / (float) h,
				2.0 * (float) w / (float) h, -2.0, 2.0, -10.0, 10.0);
    glMatrixMode(GL_MODELVIEW);
}
//======================================================
// IDLE CALLBACK ROUTINE 
//======================================================
void Drawing::idleCallBack()
{
	//LEG movement
	if (legs)
	{
		legmove = legmove + 0.005;
	}
	else 
	{
		legmove = legmove - 0.005;
	}
	if (legmove<= 0.2)
	{
		legs = true;
	}
	if (legmove>= 0.4)
	{
		legs= false;
	}


	//UPPER TAIL movement
	if(allrot)
	{
		upper_tail_rot += 0.1;
    }
	else 
	{
		upper_tail_rot -= 0.1;
    }
	
	if (upper_tail_rot <= 0)
	{
		allrot = true;
	}
	if (upper_tail_rot >= 5)
	{
		allrot= false;
	}

	//MIDDLE TAIL movement
	if(!tail)
	{
		middle_tail_rot += 0.08;
    }
	else 
	{
		middle_tail_rot -= 0.08;
    }
	
	if (middle_tail_rot > -0.1)
	{
		tail = true;
	}
	if (middle_tail_rot < 0.25)
	{
		tail= false;
	}

	//BODY movement
	if(body)
	{
		bodymove += 0.005;
    }
	else 
	{
		bodymove -= 0.005;
    }
	
	if (bodymove <= 0)
	{
		body = true;
	}
	if (bodymove >= 0.2)
	{
		body= false;
	}

	//NECK movement
	if (neck_u)
	{
		neck_rot = neck_rot + 0.03;
	}
	else 
	{
		neck_rot = neck_rot - 0.03;
	}
	if (neck_rot<= 0.0)
	{
		neck_u = true;
	}
	if (neck_rot>= 3.5)
	{
		neck_u= false;
	}

	//HEAD movement
	if (head)
	{
		head_rot = head_rot + 0.03;
	}
	else 
	{
		head_rot = head_rot - 0.03;
	}
	if (head_rot<= -0.4)
	{
		head = true;
	}
	if (head_rot>= 2)
	{
		head= false;
	}

	//LEFT WING LOWER movement
	if (left_low_wing)
	{
		left_lower_wing_rot = left_lower_wing_rot + 0.5;
	}
	else 
	{
		left_lower_wing_rot = left_lower_wing_rot - 0.5;
	}
	if (left_lower_wing_rot<= -13)
	{
		left_low_wing = true;
	}
	if (left_lower_wing_rot>= 15)
	{
		left_low_wing= false;
	}

	//LEFT WING MIDDLE movement
	if (left_mid_wing )
	{
		left_middle_wing_rot = left_middle_wing_rot + 0.4;
	}
	else  
	{
		left_middle_wing_rot = left_middle_wing_rot- 0.4;
	}
	if (left_middle_wing_rot <= -10)
	{
		left_mid_wing = true;
	}
	if (left_middle_wing_rot >= 15)
	{
		left_mid_wing= false;
	}

	//LEFT WING UPPER movement
	if (left_up_wing)
	{
		left_upper_wing_rot = left_upper_wing_rot + 0.45;
	}
	else 
	{
		left_upper_wing_rot = left_upper_wing_rot- 0.45;
	}
	if (left_upper_wing_rot<= -13)
	{
		left_up_wing = true;
	}
	if (left_upper_wing_rot>= 15)
	{
		left_up_wing= false;
	}

	//RIGHT WING LOWER movement
	if (!left_low_wing)
	{
		right_lower_wing_rot = right_lower_wing_rot + 0.5;
	}
	else 
	{
		right_lower_wing_rot = right_lower_wing_rot - 0.5;
	}
	if (right_lower_wing_rot>= 13)
	{
		right_low_wing = true;
	}
	if (left_lower_wing_rot<= -15)
	{
		right_low_wing= false;
	}

	//RIGHT WING MIDDLE movement
	if (!right_mid_wing )
	{
		right_middle_wing_rot = right_middle_wing_rot + 0.4;
	}
	else  
	{
		right_middle_wing_rot = right_middle_wing_rot- 0.4;
	}
	if (right_middle_wing_rot >= 13)
	{
		right_mid_wing = true;
	}
	if (right_middle_wing_rot <= -15)
	{
		right_mid_wing= false;
	}

	//RIGHT WING  UPPER movement
	if (!right_up_wing)
	{
		right_upper_wing_rot = right_upper_wing_rot + 0.45;
	}
	else 
	{
		right_upper_wing_rot = right_upper_wing_rot- 0.45;
	}
	if (right_upper_wing_rot>= 13)
	{
		right_up_wing = true;
	}
	if (right_upper_wing_rot<= -15)
	{
		right_up_wing= false;
	}
	
	glutPostRedisplay();
}

//======================================================
// MOUSE CALLBACK ROUTINES
//======================================================

void Drawing::mouseMotionCallback(int x , int y) 
{
	// Called when the Mouse is moved with left button down
	G_theta[0] = pitch0 + (y - mouseY0);
    G_theta[1] = yaw0 + (x - mouseX0);
	glutPostRedisplay();
} 

void Drawing::mouseClickCallback(int button, int state, int x, int y) 
{
	// Called on button press or release
    switch (state)
    {
		case GLUT_DOWN:
			MousePressed = true;
			pitch0 = G_theta[0]; 
			yaw0 = G_theta[1];
			mouseX0 = x; mouseY0 = y;
			break;
		default:
		case GLUT_UP:
			MousePressed = false;
			break;
    }
} 
#endif