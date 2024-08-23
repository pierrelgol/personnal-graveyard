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

int main() {
  FILE *pIn = NULL, *pOut = NULL;
  char fName[81];
  size_t i = 0;
  int ch = 0;

  
  puts("Enter file name to copy to lowercase :");
  while( i < 81 && (ch = getchar()) != '\n'){
    fName[i++] = ch;
  }
  fName[i] = '\0';
  pIn = fopen(fName,"r");
  
  i = 0;
  
  puts("Enter file name to copy to :");
  while( i < 81 && (ch = getchar()) != '\n'){
    fName[i++] = ch;
  }
  
  fName[i] = '\0';
  pOut = fopen(fName,"w");
  while((ch = getc(pIn))!= EOF){
    if(ch >= 'A' && ch <= 'Z')
      ch = (ch - 'A') + 'a';
    putc(ch,pOut);
  }

  fclose(pIn);
  fclose(pOut);
  puts("Opperation success\n");
  
  
  return EXIT_SUCCESS;
}
