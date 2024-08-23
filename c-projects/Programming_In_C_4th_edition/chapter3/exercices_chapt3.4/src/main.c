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

int main()
{
 float fahrenheit, celcius;
 fahrenheit = 27;
 celcius = (fahrenheit - 32) / 1.8;

 printf("Fahrenheit %.2f is equal to %.2f Celcius\n",fahrenheit,celcius);

return EXIT_SUCCESS;
}
