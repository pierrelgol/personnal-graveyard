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

int main() {
  int next_multiple, i = 256, j = 7;
  next_multiple = i + j - i % j;

  printf("The next multiple for %d days, is %d\n", i, next_multiple);

  return EXIT_SUCCESS;
}
