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
  const int data[5] = {1, 2, 3, 4, 5};
  int i, sum;
  for (i = 0; i >= 0; ++i)
    sum += data[i];
  printf("sum = %i\n", sum);
  return 0;
}
