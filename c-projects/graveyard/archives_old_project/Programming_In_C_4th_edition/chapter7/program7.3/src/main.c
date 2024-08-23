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

void printMessage(void)
{ 
  printf("Programming is fun.\n");
}

int main(void)
{
  int i;
  for (i = 1; i <= 5; ++i)
    printMessage();
  return 0;
}
