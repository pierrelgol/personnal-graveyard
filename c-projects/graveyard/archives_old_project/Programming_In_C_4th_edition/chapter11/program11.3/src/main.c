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

// Function to shift an unsigned int left if
// the count is positive, and right if negative
unsigned int shift(unsigned int value, int n) {
  if (n > 0) // left shift
    value <<= n;
  else // right shift
    value >>= -n;
  return value;
}

int main(void) {
  unsigned int w1 = 0177777u, w2 = 0444u;
  unsigned int shift(unsigned int value, int n);
  printf("%o\t%o\n", shift(w1, 5), w1 << 5);
  printf("%o\t%o\n", shift(w1, -6), w1 >> 6);
  printf("%o\t%o\n", shift(w2, 0), w2 >> 0);
  printf("%o\n", shift(shift(w1, -3), 3));
  return 0;
}
