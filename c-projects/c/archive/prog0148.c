#include <stdio.h>

int main(){

  int i, temp,hex_value[5] = {0x123,0x2f,0x000f,0xA2,0xabcd};
  int decimal[5] = {0,0,0,0,0};

  for ( i = 0; i < 5; ++i ) {

    while (hex_value[i] != 0) {
      
    decimal[i] *= 10;
    decimal[i] += hex_value[i] % 10;
    hex_value[i] /= 10;

    }

    temp = 0;

    while (decimal[i] != 0) {

      temp *= 10;
      temp += decimal[i] %10;
      decimal[i] /= 10;

    }

    decimal [i] = temp;

  }

  for ( i = 0; i < 5; ++i ) {

    printf("%3i, ",decimal[i]);
    
  }
  printf("\n");

  return 0;
}
