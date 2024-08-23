#include <stdio.h>


int main(){

  int num1, num2, num3;

  printf("Enter three integers to compare :\n");
  printf("num 1 :\n");
  scanf("%i",&num1);

  printf("num 2 :\n");
  scanf("%i",&num2);

  printf("num 3 :\n");
  scanf("%i",&num3);

  if (num1 > num2 && num2 > num3) {
    printf("num1 : %i > num2 : %i > num3 : %i\n",num1,num2,num3);
  }else if (num1 > num2 && num1 < num3) {
     printf("num3 : %i > num1 : %i > num2 : %i\n",num3,num1,num2);
  }else if (num1 < num2 && num1 < num3 && num2 > num3) {
     printf("num2 : %i > num3 : %i > num1 : %i\n",num2,num3,num1);
  }else if (num1 < num2 && num1 > num3) {
     printf("num2 : %i > num1 : %i > num3 : %i\n",num2,num1,num3);
  }else if (num1 < num2 && num1 < num3 && num3 > num1) {
     printf("num3 : %i > num2 : %i > num1 : %i\n",num3,num2,num1);
  }else if (num1 > num2 && num2 < num3) {
     printf("num1 : %i > num3 : %i > num2 : %i\n",num1,num3,num2);
  }



  return 0;
}
