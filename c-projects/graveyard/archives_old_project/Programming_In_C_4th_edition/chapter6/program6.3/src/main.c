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

// Program to generate the first 15 Fibonacci numbers
int main(void)
{
  int Fibonacci[15], i;
  Fibonacci[0] = 0; // by definition
  Fibonacci[1] = 1; // ditto
  
  for (i = 2; i < 15; ++i)
    Fibonacci[i] = Fibonacci[i - 2] + Fibonacci[i - 1];
  
  for (i = 0; i < 15; ++i)
    printf("%i\n", Fibonacci[i]);
  
  return 0;
}
