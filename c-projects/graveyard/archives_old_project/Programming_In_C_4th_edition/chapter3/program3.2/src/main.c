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

//--------------------[     MAIN METHOD     ]--------------------------------//
// Illustrate the use of various arithmetic operators

int main (void)
{
 int a = 100;
 int b = 2;
 int c = 25;
 int d = 4;
 int result;
 
 result = a - b; // subtraction
 printf ("a - b = %i\n", result);
 
 result = b * c; // multiplication
 printf ("b * c = %i\n", result);
 
 result = a / c; // division
 printf ("a / c = %i\n", result);
 
 result = a + b * c; // precedence
 
 printf ("a + b * c = %i\n", result);
 printf ("a * b + c * d = %i\n", a * b + c * d);
 
 return 0;
}


