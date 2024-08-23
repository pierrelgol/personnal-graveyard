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

typedef struct String {
  char *value;
  size_t size;
} String;

int findString(String *search, String *in){
  if(search->value == NULL) return -2;
  if(in->value == NULL) return -3;
  if ( search->size > in->size ){
    return -1;
  }
  size_t i, j = search->size;

  for( i = in->size; i != 0; --i){
    while(in->value[i] == search->value[j]){
      j--;
      i--;
      if(j == 0) return i;
    }
  }
  return 0;
}

void getStringInput(String *str) {
  char buffer[81];
  size_t count = 0;
  char ch = getchar();
  while (ch != '\n' && count <= 80) {
    buffer[count++] = ch;
    ch = getchar();
  }
  buffer[count] = '\0';
  str->value = (char *)malloc(sizeof(char) * count + 1);
  if(!str->value) exit(1);
  str->size = count;
  strcpy(str->value, buffer);
}

int main(void) {

  String str1, str2;
  printf("Enter source string\n");
  getStringInput(&str1);
  printf("Enter string to find in source\n");
  getStringInput(&str2);
  printf("%s  = %zu | %s = %zu\n", str1.value, str1.size, str2.value, str2.size);
  printf("The index of the substring s2 in s1 is %d\n",findString(&str2,&str1));
  free(str1.value);
  free(str2.value);
  
  return EXIT_SUCCESS;
}