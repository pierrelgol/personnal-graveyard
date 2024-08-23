#include <stdio.h>

int main(){

  int number[5] = {23,54,15,345,700};
  int binary;

  for (int i = 0; i < 5; ++i) {
    
    while (number[i] != 0) {
      binary *= 10;
      binary += number[i]%2;
      number[i] /= 2; 
    }
    while (binary != 0) {
      printf("%i",binary % 10);
      binary /= 10;
    }
    printf("\n");
  }


  return 0;
}
