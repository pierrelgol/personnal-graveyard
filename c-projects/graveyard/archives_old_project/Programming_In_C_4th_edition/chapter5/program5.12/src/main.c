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

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

// Program to generate a table of prime numbers
int main(void)
{
  
  int p, d;
  bool isPrime;
  
  for (p = 2; p <= 50; ++p) {
    isPrime = true;
    for (d = 2; d < p; ++d)
      if (p % d == 0)
        isPrime = false;
    if (isPrime != false)
      printf("%i ", p);
  }
  
  printf("\n");
  
  return 0;
}