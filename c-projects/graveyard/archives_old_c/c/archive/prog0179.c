#include <stdio.h>


int main(){
  int i = 0;

  while (i < 1) {
    printf("inside loop ++i = %i\n",i);
    ++i;
  }
  printf("outside loop ++i = %i\n\n",i);

  printf("\n");
  i = 1;
  while(i < 1) {
    printf("inside loop i++ = %i\n",i);
    i++;
  }
  printf("outisde loop i++ %i\n",i);
  return 0;
}
