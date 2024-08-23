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

// Program to illustrate using pointers and functions
void test(int *int_pointer) { *int_pointer = 100; }

int main(void) {
  void test(int *int_pointer);
  int i = 50, *p = &i;
  printf("Before the call to test i = %i\n", i);
  test(p);
  printf("After the call to test i = %i\n", i);
  return 0;
}
