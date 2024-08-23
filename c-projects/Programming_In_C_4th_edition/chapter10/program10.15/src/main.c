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

// Function to count the characters in a string – Pointer version
int stringLength(const char *string) {
  const char *cptr = string;
  while (*cptr)
    ++cptr;
  return cptr - string;
}

int main(void) {
  int stringLength(const char *string);
  printf("%i ", stringLength("stringLength test"));
  printf("%i ", stringLength(""));
  printf("%i\n", stringLength("complete"));
  return 0;
}
