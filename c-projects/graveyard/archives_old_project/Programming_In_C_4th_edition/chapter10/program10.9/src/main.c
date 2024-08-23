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

// More on pointers and functions
void exchange(int *const pint1, int *const pint2) {
  int temp;
  temp = *pint1;
  *pint1 = *pint2;
  *pint2 = temp;
}

int main(void) {
  void exchange(int *const pint1, int *const pint2);
  int i1 = -5, i2 = 66, *p1 = &i1, *p2 = &i2;
  printf("i1 = %i, i2 = %i\n", i1, i2);
  exchange(p1, p2);
  printf("i1 = %i, i2 = %i\n", i1, i2);
  exchange(&i1, &i2);
  printf("i1 = %i, i2 = %i\n", i1, i2);
  return 0;
}
