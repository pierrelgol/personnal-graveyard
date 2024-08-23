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

// Program to generate a table of triangular numbers

int main(void)
{
  int n, triangularNumber;
  
  printf("TABLE OF TRIANGULAR NUMBERS\n\n");
  printf(" n Sum from 1 to n\n");
  printf("--- ---------------\n");
  
  triangularNumber = 0;
  
  for (n = 1; n <= 10; ++n) {
    triangularNumber += n;
    printf(" %i %i\n", n, triangularNumber);
  }
  
  return 0;
}