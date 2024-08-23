#include <stdio.h>

int main(){

  int number[5] = {0x123,0x2F,0x000F,0xA2,0xABCD};
  int decimal;

  for (int i = 0; i < 5; ++i) {
    
    while (number[i] != 0) {
      decimal *= 10;
      decimal += number[i]%10;
      number[i] /= 10; 
    }
    while (decimal != 0) {
      printf("%i",decimal % 10);
      decimal /= 10;
    }
    printf("\n");
  }


  return 0;
}
