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

// The modulus operator
int main(void)
{
  int a = 25, b = 5, c = 10, d = 7;
  
  printf("a = %i, b = %i, c = %i, and d = %i\n", a, b, c, d);
  printf("a %% b = %i\n", a % b);
  printf("a %% c = %i\n", a % c);
  printf("a %% d = %i\n", a % d);
  printf("a / d * d + a %% d = %i\n", a / d * d + a % d);
  
  return 0;
}
