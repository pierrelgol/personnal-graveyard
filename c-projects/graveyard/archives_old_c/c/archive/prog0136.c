#include <stdio.h>

int main(){

  int value;

  
  printf("Enter an integer\n");
  scanf("%i",&value);

  printf( (value < 0) ? ("-1\n") : (value == 0) ? ("0\n") : ("1\n") );

  return 0;
}
