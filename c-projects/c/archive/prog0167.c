#include <stdio.h>


int main(){

  int size, previous_input = 0, next_input;
  _Bool isValid = 1;

  printf("Enter the size of your sample :\n");
  scanf("%i",&size);

  while(size > 0){

    printf("Enter the size of your sample :\n");
    scanf("%i",&next_input);
    if (isValid) {
      isValid = (next_input > previous_input ? 1 : 0);
    }
    --size;
  }

  if (isValid) {

    printf("ASCENDING\n");
    
  }else {
    printf("NOT ASCENDING\n");
  }

  return 0;
}
