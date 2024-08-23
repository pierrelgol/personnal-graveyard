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

// Function to count the number of characters in a string

int stringLength(const char string[]) {
  int count = 0;
  while (string[count] != '\0')
    ++count;
  return count;
}

int main(void) {
  
  int stringLength(const char string[]);
  const char word1[] = {'a', 's', 't', 'e', 'r', '\0'};
  const char word2[] = {'a', 't', '\0'};
  const char word3[] = {'a', 'w', 'e', '\0'};
  
  printf("%i %i %i\n", stringLength(word1), stringLength(word2),
         stringLength(word3));
  return 0;
}
