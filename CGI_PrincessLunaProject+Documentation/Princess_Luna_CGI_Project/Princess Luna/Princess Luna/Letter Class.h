/*********************************************************************************************************************************
Author: Nelio Lucas , Tyron McDonald , Tejas Dwarkaram
FileName: Letter class.h
Date: 2014-04-11
Operating system: Windows 7
Description : this file contains all the main functions used for creating the letters that builds
the 3D model of princess luna 
**********************************************************************************************************************************/
#include "Letter T.h"
#include "Letter O.h"
#include "Letter D.h"
#include "Letter J.h"
#include "Letter R.h"
#include "Letter M.h"
#include "Letter N.h"
#include "Letter I.h"
#include "Letter L.h"

#ifndef Letter_class_H
#define Letter_class_H

#include <iostream>
#include <GL/glut.h>


using std::cout;
using std::endl;




class Letters
{

public:

	//the following fuctions draw letters 
	static void  letter_t(float,float,float,float,float,float,float,float,float,float);
	static void  letter_d(float,float,float,float,float,float,float,float,float,float, float,float ,float);
	static void  letter_n(float,float,float,float,float,float,float,float,float,float,float,bool,bool,bool);
	static void  letter_j(float,float,float,float,float,float,float,float,float,float);
	static void  letter_o(float,float,float,float,float,float,float,float,float,float,float,float,float);
	static void  letter_l(float,float,float,float,float,float,float,float,float,float,float,float,float);
	static void  letter_m(float,float,float,float,float,float,float,float,float,float);
	static void  letter_r(float,float,float,float,float,float,float,float,float,float,float,float,float,float,bool,bool,bool);
	static void  letter_i(float,float,float,float,float,float,float,float,float,float);

	//SEGMENTS OF L
    static void horizontal(float,float,float);
    static void  vertical(float,float,float);

	//CURVE OF J , D and O
	static void curveofj(double, double, double, double, double, double);
    static void curveofd(double, double, double, double, double, double, float , float , float);
    static void  curve_o(double , double , double , double , double , double , float , float , float);


};





#endif