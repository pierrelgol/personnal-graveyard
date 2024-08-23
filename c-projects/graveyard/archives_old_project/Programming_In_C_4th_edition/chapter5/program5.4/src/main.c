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

// Program to determine if a number is even or odd (Ver. 2)
int main()
{
  int number_to_test, remainder;
  
  printf("Enter your number to be tested: ");
  scanf("%i", &number_to_test);
  remainder = number_to_test % 2;
  
  if (remainder == 0)
    printf("The number is even.\n");
  else
    printf("The number is odd.\n");
  
  return 0;
}
