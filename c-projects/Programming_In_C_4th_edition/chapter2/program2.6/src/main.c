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
/* This program adds two integer values and display the results */
#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

int main()
{
 //declare variables
 int value1, value2, sum;

 //assign values and calculate their sum
 value1 = 50;
 value2 = 25;
 sum = value1 + value2;

 //display the result
 printf("The sum of %d and %d is %d\n",value1,value2,sum);


return EXIT_SUCCESS;
}
