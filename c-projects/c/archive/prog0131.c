#include <stdio.h>

int main(){


  int num1, num2, num3, max, min;

  printf("Enter num1 :\n");
  scanf("%i",&num1);
  
  printf("Enter num2 :\n");
  scanf("%i",&num2); 
  
  printf("Enter num3:\n");
  scanf("%i",&num3);

  max = num1;
  if (num2 > max || num3 > max) {
    max = num2;
    if (num3 > max) {
      max = num3;
    }
  }
  min = num1;
  if (num2 < min || num3 < min) {
    min = num2;
    if (num3 < min) {
      min = num3;
    }
  }

  printf("max = %i , min = %i\n",max,min);
    
  return 0;

}
