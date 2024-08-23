#include <stdio.h>

int main(){

  int x;

  printf("Enter an integer :\n");
  scanf("%i",&x);

  if ( (x/100) < (x/10) % 10 && (x/10) % 10 < (x % 10) ) {
    printf("ASCENDING\n");
  }else {
    printf("NOT ASCENDING\n");
  }

  return 0;
}
