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

// Program to calculate the absolute value of an integer
int main(void)
{
  int number;
  printf("Type in your number: ");
  scanf("%i", &number);
  
  if (number < 0)
    number = -number;
  
  printf("The absolute value is %i\n", number);
  
  return 0;
}
