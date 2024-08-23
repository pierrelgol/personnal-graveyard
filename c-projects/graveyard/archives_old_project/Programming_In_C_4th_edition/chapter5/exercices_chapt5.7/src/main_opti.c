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

/* basic implementation of program5.10 :        

to compute the the prime number between 2 and 50 the number of cycle needed is
1225 improved version (main_opti) do the same in 140 cycles which is a 7.75 times faster.

to compute the the prime number between 2 and 1000 the number of cycle needed is
499500 improved version (main_opti) do the same in 6283 cycles which is a 78.5 times faster
*/

int main() {

  int p, d;
  int cycle = 0;
  bool isPrime;

  printf("2 3 ");
  for (p = 5; p <= 1000; p++) {
    isPrime = true;
    cycle++;
    for (d = 2 ; d * d <= p; d++) {
      cycle++;
      if (p % d == 0){
        isPrime = false;
        break;
      }
    }
    if (isPrime != false)
      printf("%i ", p);
  }
  printf("\ncycle = %d",cycle);
  printf("\n");

  return EXIT_SUCCESS;
}

