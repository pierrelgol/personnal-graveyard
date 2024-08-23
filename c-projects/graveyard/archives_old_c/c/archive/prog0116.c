#include <stdio.h>

int main(){

  int a = 1, b = 2;
  printf("a = %i , b = %i\n",a,b);
  a = a + b;
  printf("a = %i , b = %i\n",a,b);

  b = a - b;
  printf("a = %i , b = %i\n",a,b);

  a = a - b;
  printf("a = %i , b = %i\n",a,b);

  return 0;
}
