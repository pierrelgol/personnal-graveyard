#include <stdio.h>
#include <string.h>
int main(){

  char str[] = "I'm sorry";
  int punishment = 100;
  int punishment_per_line = 10;

  for ( int i = 1 ; i <= punishment; ++i ){
    if (i % punishment_per_line == 0) {
      printf("\n");
    }else {
      printf("%s ",str);
    }
  } 
  printf("\n");

  return 0;
}
