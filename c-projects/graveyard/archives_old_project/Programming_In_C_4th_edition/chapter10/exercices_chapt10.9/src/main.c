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

//--------------------[     MAIN METHOD     ]--------------------------------//

void readLine(char *buffer);

#define BUFFER_SIZE 81

int main()
{
 char buffer[BUFFER_SIZE];
 readLine(buffer);

 printf("%s\n",buffer);

return EXIT_SUCCESS;
}
// Function to read a line of text from the terminal
void readLine(char *buffer) {
 char *pbuffer = buffer;
 size_t i = 0;
  while((*pbuffer = getchar()) != '\n' && ++i < BUFFER_SIZE){
   ++pbuffer;
  }
  *pbuffer = '\0';
}

