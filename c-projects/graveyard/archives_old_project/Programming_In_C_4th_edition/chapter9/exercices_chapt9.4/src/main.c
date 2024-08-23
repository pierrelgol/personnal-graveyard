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
#include <stdbool.h>

//--------------------[     MAIN METHOD     ]--------------------------------//


void substring(const char *src, int from, int length, char *result){
  size_t i = from, j = 0, bound = (from + length);
  for( ; i < bound ; i++ ){
    result[j++] = src[i];
  }
  result[j] = '\0';
}

int main(){

  char *str = (char*) malloc(sizeof(char) * 4);
  substring ("character", 4, 3, str);
  printf("The substring for character is %s \n",str);
  free(str);
  return EXIT_SUCCESS;
}