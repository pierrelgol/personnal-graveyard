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

//--------------------[     DEPENDENCIES DECLARATION     ]-------------------//

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

int main() {
  
  int values[10];
  int index;

  for (size_t i = 0; i < 10; ++i ){
    values[i] = 0;
  }

  values[0] = 197;
  values[2] = -100;
  values[5] = 350;
  values[3] = values[0] + values[5];
  values[9] = values[5] / 10;
  --values[2];

  for (index = 0; index < 10; ++index)
    printf("values[%i] = %i\n", index, values[index]);

  return 0;

  return EXIT_SUCCESS;
}
