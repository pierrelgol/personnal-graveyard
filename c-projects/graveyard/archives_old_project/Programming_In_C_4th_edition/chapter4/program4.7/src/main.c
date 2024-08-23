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

/* Program to find the greatest common divisor
 of two nonnegative integer values */
int main(void)
{
  int u, v, temp;
  
  printf("Please type in two nonnegative integers.\n");
  scanf("%i%i", &u, &v);
  
  while (v != 0) {
    temp = u % v;
    u = v;
    v = temp;
  }
  
  printf("Their greatest common divisor is %i\n", u);
  
  return 0;
}
