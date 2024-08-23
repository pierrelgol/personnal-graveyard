#include <stdio.h>

const int NUM_PER_LINE = 10;

int main(){

  int num, i, count;

  printf("Enter a number :\n");
  scanf("%i",&num);


  for (i = 2, count = 1; i <= num; i = i + 2 ) {
    if ( (count % NUM_PER_LINE) == 0) {
      printf("%4i\n",i);
    }else {
      printf("%4i,",i);
    }
    ++count;
  }

  printf("\n");

  for (i = 0, count = 1; i < num; i = i + 2 ) {
    if ( (count % NUM_PER_LINE) == 0) {
      printf("%4i\n",num - i - ( (num % 2 == 0) ? 0 : -2 ));

    }else {
      printf("%4i,",num-i);
    }
    ++count;
  }
  printf("\n");

  return 0;
}
