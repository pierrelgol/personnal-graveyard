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
  int count = 10, x;
  int *int_pointer;
  int_pointer = &count;
  x = *int_pointer;
  printf("count = %i, x = %i\n", count, x);
  return 0;
}
