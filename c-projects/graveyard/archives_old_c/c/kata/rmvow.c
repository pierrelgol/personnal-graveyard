#include <stdlib.h>
#include <string.h>

char *disemvowel(const char *str)
{
  char *ans = malloc(sizeof(char) * strlen(str) + 1);
  int j = 0;
  for(int i = 0; i < strlen(str); ++i){
    switch(str[i]){
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        break;
      default:
        ans[j++] = str[i];
    }
  }
  ans[j] = '\0';
  
  return ans;
}
int main(void){

  char str[] = "This is a super way to see wether or not my algo is faster than the best one";
  int x = 1000000;
  
  while (x > 0){
    char *res = disemvowel(str);
    x--;
    free(res);
  }
  
  
  return 0;
}