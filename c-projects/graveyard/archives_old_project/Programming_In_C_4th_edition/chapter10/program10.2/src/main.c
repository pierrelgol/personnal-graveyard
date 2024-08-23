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

int main(void) {
  char c = 'Q';
  char *char_pointer = &c;
  printf("%c %c\n", c, *char_pointer);
  c = '/';
  printf("%c %c\n", c, *char_pointer);
  *char_pointer = '(';
  printf("%c %c\n", c, *char_pointer);
  return 0;
}
