#include <ctype.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char *accum(const char *source) {
  size_t src_len = 0;
  for (; source[src_len] != '\0'; src_len++);
  
  size_t res_len = 0;
  for (size_t i = 0; i < src_len; i++){
    res_len += i;
  }
  res_len += src_len * 2;

  printf("%zu\n",res_len);

  char *res = (char*) malloc(sizeof(char) * res_len);
  char *cpy = (char*) malloc(sizeof(char) * src_len);
  if (!res || !cpy) return NULL;
  strcpy(cpy,source);
  size_t i = 0;
  size_t j = 0; 
  size_t k = 0; 

  for ( i = 0; i < src_len;){
    cpy[i] = tolower(cpy[i]);
    i++;
  }
  cpy[i] = '\n';
  for ( i = 0, j = 0; i < src_len; i++ ){
    
    res[j++] = toupper(cpy[i]);

    for ( k = i; k > 0; k--){
      res[j++] = cpy[i];
    }
    res[j++] = '-';
  }

  res[res_len - 1] = '\0';
  
  return res;
}


int main(void){

  char str[] = "";
  char *res = accum(str);

  printf("%s --> %s\n",str,res);

  free(res);
  return 0;
}
