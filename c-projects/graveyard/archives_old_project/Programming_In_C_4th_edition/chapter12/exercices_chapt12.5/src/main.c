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
#include <assert.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

#define SHIFT(v,n) (((n) > 0) ? ((v) << (n)) : ((v) >> (-n)))


int main() {
  
  int v = 10, n = 2;
  assert(SHIFT(v,n) == 40);
  printf("Test....................Passed\n");
  
  return EXIT_SUCCESS;
}
