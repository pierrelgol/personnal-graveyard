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

int main(void)
{
  char word[] = {'H', 'e', 'l', 'l', 'o', '!'};
  int i;
  
  for (i = 0; i < 6; ++i)
    printf("%c", word[i]);
  
  printf("\n");
  
  return 0;
}
