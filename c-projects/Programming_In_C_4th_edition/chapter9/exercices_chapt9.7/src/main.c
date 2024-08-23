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

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

void insertString(char *src, char *toInsert, size_t insertIndex) {
  if (!src || !toInsert)
    return;
  size_t i, j;
  char buffer[1024];
  for (i = 0, j = 0; src[i] != '\0'; i++) {

    if (i == insertIndex) {
      while (toInsert[j]) {
        buffer[i + j] = toInsert[j];
        j++;
      }
    }
    buffer[i+j] = src[i];
  }
  buffer[i] = '\0';
  strcpy(src, buffer);
}

int main() {
  char str1[30] = {"Hello world My is Plgol       "};
  char str2[] = {" name"};
  printf("%s\n", str1);
  printf("%s\n", str2);
  insertString(str1, str2, 14);
  printf("%s\n", str1);
  printf("%s\n", str2);

  return EXIT_SUCCESS;
}
