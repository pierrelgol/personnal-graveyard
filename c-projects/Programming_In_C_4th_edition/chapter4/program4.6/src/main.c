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

// Program to introduce the while statement
int main(void)
{
  int count = 1;
  
  while (count <= 5) {
    printf("%i\n", count);
    ++count;
  }
  
  return 0;
}
