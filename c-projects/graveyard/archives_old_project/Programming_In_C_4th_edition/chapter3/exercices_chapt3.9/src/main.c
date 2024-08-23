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

  int i1 = 365, i3 = 996, j1 = 7, j2 = 23, j3 = 4;
  float i2 = 12.258;
  int res1, res2, res3;

  res1 = i1 + j1 - i1 % j1;
  res2 = i2 + j2 - (int)(i2) % j2;
  res3 = i3 + j3 - i3 % j3;

  printf("The result 1 is %d, the result 2 is %d, the result 3 is %d\n",res1, res2, res3);
  
  return EXIT_SUCCESS;
}
