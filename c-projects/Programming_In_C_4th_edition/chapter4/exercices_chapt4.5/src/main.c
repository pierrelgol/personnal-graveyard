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

int main(void) {

  int n, n_pow2;

  printf("TABLE OF POWERS OF TWO\n\n");
  printf("| n |    n^2    |\n");
  printf("|---|-----------|\n");

  n_pow2 = 1;

  for (n = 1; n <= 10; ++n) {
    printf("|%2i |    %5i  |\n", n, n_pow2);
    n_pow2 *= 2;
  }

  printf("|---|-----------|\n");

  return 0;
}
