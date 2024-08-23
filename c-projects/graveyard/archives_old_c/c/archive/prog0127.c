#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

  int number;

  printf("Enter an integer :\n");
  scanf("%i",&number);

  printf("number %i is %s\n",number,(number % 2 == 0 ? "even" : "odd"));

  return 0;
}
