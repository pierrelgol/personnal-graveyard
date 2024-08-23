/*
 *
 *   Title of project : 
 *   Date of creation : 
 *   Author(s) : PierreLgol
 *   github : https://github.com/pierrelgol
 * 
 *   More on the project :
 *   
 *   #TODO(s) :  
 * 
 *
 */

//--------------------[     DEPENDENCIES DECLARATION     ]--------------------//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//--------------------[     MAIN METHOD     ]--------------------------------//

int main()
{
 float f = 1.00;
 short int i = 100;
 long int l = 500L;
 double d = 15.00;
 
 printf("%llf",(f + i*l / d*i / l + f*l * i*f / 2i / (d + f)*l / (i * 2.0)*l + i / (double) l));
 
return EXIT_SUCCESS;
}
