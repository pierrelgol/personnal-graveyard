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

/* Function to find the greatest common divisor
 of two nonnegative integer values */

void gcd(int u, int v) {
  int temp;
  printf("The gcd of %i and %i is ", u, v);
  while (v != 0) {
    temp = u % v;
    u = v;
    v = temp;
  }
  printf("%i\n", u);
}

int main(void) {
  gcd(150, 35);
  gcd(1026, 405);
  gcd(83, 240);
  return 0;
}
