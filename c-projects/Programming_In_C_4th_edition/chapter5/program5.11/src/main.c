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

// Program to generate a table of prime numbers
int main(void)
{
  int p, d;
  _Bool isPrime;
  
  for (p = 2; p <= 50; ++p) {
    isPrime = 1;
    for (d = 2; d < p; ++d)
      if (p % d == 0)
        isPrime = 0;
    if (isPrime != 0)
      printf("%i ", p);
  }
  
  printf("\n");
  
  return 0;
}
