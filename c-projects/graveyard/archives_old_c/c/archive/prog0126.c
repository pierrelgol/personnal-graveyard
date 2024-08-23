#include <stdio.h>
#include <stdlib.h>

int main (){
  
  int num1, num2;

  printf("Enter two integers to compare :\n");
  scanf("%i %i",&num1,&num2);

  printf("%i > %i\n",(num1>num2 ? num1 :num2),(num1<num2 ? num1 :num2));

  return 0;
}
