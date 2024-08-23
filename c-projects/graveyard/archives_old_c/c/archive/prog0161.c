#include <stdio.h>

const int NUM_PER_LINE = 10;

int main(){

  int num, i, count;

  printf("Enter a number :\n");
  scanf("%i",&num);


  for (i = 1, count = 1; i <= num; ++i ) {
    if ( (count % NUM_PER_LINE) == 0) {
      printf("%4i\n",i);
    }else {
      printf("%4i,",i);
    }
    ++count;
  }

  printf("\n");

  for (i = 0, count = 1; i < num; ++i ) {
    if ( (count % NUM_PER_LINE) == 0) {
      printf("%4i\n",num-i);
    }else {
      printf("%4i,",num-i);
    }
    ++count;
  }
  printf("\n");

  return 0;
}
