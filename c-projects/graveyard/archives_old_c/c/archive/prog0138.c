#include <stdio.h>

int main(){

  int num1, num2;
  
  printf("Enter an integer :\n");
  scanf("%i",&num1);

  if (num1 > 99) {
    printf("this number has 3 digit\n");
  }else {
    printf("this number has 2 digit\n");
  }

  return 0;
}
