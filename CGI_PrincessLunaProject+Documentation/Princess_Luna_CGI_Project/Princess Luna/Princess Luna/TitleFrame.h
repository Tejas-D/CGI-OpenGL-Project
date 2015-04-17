/*******************************************************************************
Author: Nelio Lucas
FileName: TitleFrame.h
Date:2013-01-22
Operating System: Windows 7
Description:this file contains the framing function
********************************************************************************/
#ifndef GUARD_frame_h
#define GUARD_frame_h
#include <string>
#include <iostream>


using std::string;
using std::cout;
using std::cin;
using std::endl;

/*******************************************************************************
                                 * frame *
                     this function frames  any string value
*******************************************************************************/
string frame(string& v)
{
     int maxlen = 0;
     maxlen = v.size();
     system("cls");
     string star(maxlen,'*' );
     //top frame
     cout << star << endl;
     
     for(int i = 0; i != maxlen; i++)
     {
         
        //display each character
         cout << v[i];  
     }   
     
     cout << endl;
     //bottom frame
     cout << star;
     return v;
}    

#endif


   