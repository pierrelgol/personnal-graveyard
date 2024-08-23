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

void removeString(char *source, size_t from, size_t to){
 char buffer[1024];
 size_t i, j;
 for ( i = 0, j = 0; source[i] != '\0'; i++ ){
  if(i <= from-1 || i >= (from-1+to)){
   buffer[i-j] = source[i];
  }else{
   j++;
  }
 }
 buffer[i-j] = '\0';
 strcpy(source,buffer);
}

int main()
{
 char str[] = {"Hello World"};
 printf("%s\n",str);
 removeString(str,2 ,4);
 printf("%s\n",str);

return EXIT_SUCCESS;
}
