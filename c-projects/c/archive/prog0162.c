#include <stdio.h>


int main(){

  int num, sum = 0;

  printf("Enter a number\n");
  scanf("%i",&num);

  printf("The sum of num %i is : ",num);
  while (num > 0) {
    sum += num;
    --num;
  }
  printf("%i\n",sum);



  return 0;
}
