#include <stdio.h>

int main(){

  int x, x2,x4;

  printf("Enter a integer :\n");
  scanf("%i",&x);

  printf("x = %i,",x);
  x2 = x*x;
  printf("x^2 = %i, ",x2);
  x4 = x2 * x2;
  printf("x^4 = %i, ",x4);
  printf("x^6 = %i, ",x2*x4);
  printf("x^8 = %i,\n",x4*x4);

  return 0;
}
