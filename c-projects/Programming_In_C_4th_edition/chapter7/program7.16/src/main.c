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

// Program to illustrate static and automatic variables
void auto_static(void) {
  int autoVar = 1;
  static int staticVar = 1;
  printf("automatic = %i, static = %i\n", autoVar, staticVar);
  ++autoVar;
  ++staticVar;
}

int main(void) {
  int i;
  void auto_static(void);
  for (i = 0; i < 5; ++i)
    auto_static();
  return 0;
}
