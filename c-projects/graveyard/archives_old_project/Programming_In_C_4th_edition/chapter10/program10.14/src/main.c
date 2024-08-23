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

// Function to copy one string to another. Pointer Ver. 2
void copyString(char *to, char *from) {
  while (*from)
    *to++ = *from++;
  *to = '\0';
}

int main(void) {
  void copyString(char *to, char *from);
  char string1[] = "A string to be copied.";
  char string2[50];
  copyString(string2, string1);
  printf("%s\n", string2);
  copyString(string2, "So is this.");
  printf("%s\n", string2);
  return 0;
}
