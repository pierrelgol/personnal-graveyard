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

#include <stdio.h>
#include <stdlib.h>

//--------------------[     METHOD DEFINITION     ]--------------------------//

void age_function(int age);

//--------------------[     MAIN METHOD     ]--------------------------------//
int main() {
  int age;
  printf("Enter your age :\n");
  scanf("%d", &age);
  void (*age_func)(int);
  age_func = age_function;
  age_func(age);

  return EXIT_SUCCESS;
}
//--------------------[     METHOD IMPLEMENTATION     ]----------------------//

void age_function(int age) {
  printf("Your age is %d\n", age);
}
