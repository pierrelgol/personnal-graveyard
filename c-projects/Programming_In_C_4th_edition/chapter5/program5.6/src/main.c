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

// Program to implement the sign function
int main(void)
{
  int number, sign;
  
  printf("Please type in a number: ");
  scanf("%i", &number);
  
  if (number < 0)
    sign = -1;
  else if (number == 0)
    sign = 0;
  else // Must be positive
    sign = 1;
  
  printf("Sign = %i\n", sign);
  
  return 0;
}
