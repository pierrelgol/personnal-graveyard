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
/* Program to substract 15 from 87 */
int main()
{
 //declaring variables
 int value1, value2, sum;

 //initializing variables and operating substraction
 value1 = 87;
 value2 = 15;
 sum = value1 - value2;

 //displaying result
 printf("The result of %d, and %d is %d\n",value1,value2,sum);
 
return EXIT_SUCCESS;
}
