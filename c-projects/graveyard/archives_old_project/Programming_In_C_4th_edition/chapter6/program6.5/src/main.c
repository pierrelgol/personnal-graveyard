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

int main(void)
{
  int array_values[10] = {0, 1, 4, 9, 16};
  int i;
  
  for (i = 5; i < 10; ++i)
    array_values[i] = i * i;
  for (i = 0; i < 10; ++i)
    printf("array_values[%i] = %i\n", i, array_values[i]);
  
  return 0;
}
