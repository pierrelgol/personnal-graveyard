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

// Function to calculate the nth triangular number

void calculateTriangularNumber(int n) {
  int i, triangularNumber = 0;
  for (i = 1; i <= n; ++i)
    triangularNumber += i;
  printf("Triangular number %i is %i\n", n, triangularNumber);
}

int main(void) {
  calculateTriangularNumber(10);
  calculateTriangularNumber(20);
  calculateTriangularNumber(50);
  return 0;
}
