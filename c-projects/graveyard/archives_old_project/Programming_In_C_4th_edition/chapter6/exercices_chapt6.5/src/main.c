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
  int numbers[10] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int i, j;

  for (j = 0; j < 10; ++j)
    for (i = 0; i < j; ++i)
      numbers[j] += numbers[i];

  for (j = 0; j < 10; ++j)
    printf("%i ", numbers[j]);

  printf("\n");

  return 0;
}
