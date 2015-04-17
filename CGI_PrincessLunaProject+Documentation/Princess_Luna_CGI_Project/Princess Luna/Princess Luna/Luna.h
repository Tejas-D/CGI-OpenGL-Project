/*********************************************************************************************************************************
Author: Tyron McDonald , Tejas Dwarkaram , Nelio Lucas
Date: 2014-04-11
Operating system: Windows 7
IDE : Microsoft Visual Studio 2012 for Windows Desktop
Description : this file contains the luna (acting as a draw scene) function definition
**********************************************************************************************************************************/
#ifndef LUNA_H
#define LUNA_H

#include "Drawing Class.h"




/****************************************/
/*    Displays all drawing functions    */
/****************************************/

void Drawing::luna(float neck_rot, float head_rot , float upper_tail_rot , float middle_tail_rot , float lower_tail_rot , float left_lower_wing_rot , float left_middle_wing_rot, float left_upper_wing_rot,  float right_lower_wing_rot , float right_middle_wing_rot, float right_upper_wing_rot, float legmove , float bodymove )
{
	//BODY
	draw_body(bodymove);
	//NECK
	draw_neck(head_rot,neck_rot,bodymove);
	//LEFT HIND LEG
	draw_upper_hind_left_leg(legmove);
	//RIGHT HIND LEG
	draw_upper_hind_right_leg(legmove);
	//LEFT FRONT LEG
	draw_upper_front_left_leg(legmove);
	//RIGHT FRONT LEG
	draw_upper_front_right_leg(legmove);
    //TAIL
	draw_upper_tail(upper_tail_rot,middle_tail_rot,bodymove);
	//LEFT WING
	 draw_lower_left_wing(left_upper_wing_rot,left_middle_wing_rot,left_lower_wing_rot);
	//RIGHT WING
	draw_lower_right_wing(right_upper_wing_rot,right_middle_wing_rot,right_lower_wing_rot);
	 //FLOOR
	drawFloor();
	drawMoon();
	gridLines();

}

#endif
