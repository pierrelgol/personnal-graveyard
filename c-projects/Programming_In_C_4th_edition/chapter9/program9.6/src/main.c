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
  int i;
  char line[81];
  void readLine(char buffer[]);
  for (i = 0; i < 3; ++i) {
    readLine(line);
    printf("%s\n\n", line);
  }
  return 0;
}

// Function to read a line of text from the terminal
void readLine(char buffer[]) {
  char character;
  int i = 0;
  do {
    character = getchar();
    buffer[i] = character;
    ++i;
  } while (character != '\n');
  buffer[i - 1] = '\0';
}
