#include <stdio.h>

int main(){

  int num, i, sum = 0;
  _Bool inputIsValid;
  printf("Enter a number :\n");
  scanf("%i",&num);
  inputIsValid = (num > 0 ? 1 : 0);

  if (inputIsValid) {

    for (i = 15; i <= num; i = i + 5 ) {
      if (i % 3 == 0) {
        sum += i;
      }
    }
  }
  printf("the sum is %i\n",sum);

  return 0;
}
