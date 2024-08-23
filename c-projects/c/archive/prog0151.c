#include <stdio.h>

int main(){

  char ch;
  int hex_digit, binary = 0;
  
  printf("Enter a 1-digit value in hexadecimal format :\n");
  scanf("%c",&ch);

  
  if ( (ch >= 48 && ch <= 57) || (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 126) ) {
  
      if (ch >= 'A' && ch <='F') {
        hex_digit = (int)(10 + ch - 'A' );
        printf("hex_digit = %i\n",hex_digit);
      }
      
      if (ch >= 'a' && ch <='f') {
        hex_digit = (int)(10 + ch - 'a');
        printf("hex_digit = %i\n",hex_digit);
      }

      if (ch >= '0' && ch <= '9') {
        hex_digit = (int)(ch - 48);
        printf("hex_digit = %i\n",hex_digit);
      }

      while (hex_digit != 0) {
        
        binary += hex_digit % 2;
        binary *= 10;
        printf("%i\n",hex_digit);
        hex_digit /= 2;
      
      }
       
      printf("binary = 0b%i\n",binary);
    
  }else {

    printf("Not a hexadecimal digit !\n");
    return 1;

  }

  return 0;
}
