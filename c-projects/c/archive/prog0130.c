#include <stdio.h>

int main(){

  int num1, num2, num3,max,min;

  printf("Enter 3 integers\n");
  scanf("%i %i %i",&num1,&num2,&num3);

  max = ((num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3));
  min = ((num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3));

  printf("The maximum value is %i and the minimun is %i\n",max,min);

  return 0;
}
