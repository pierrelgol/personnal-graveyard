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

/* Program to calculate the 200th triangular number
 Introduction of the for statement */

int main(void)
{
  int n, triangularNumber;
  triangularNumber = 0;
  
  for (n = 1; n <= 200; n = n + 1)
    triangularNumber = triangularNumber + n;
  
  printf("The 200th triangular number is %i\n", triangularNumber);
  
  return 0;
}
