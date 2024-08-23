/*
 *
 *   Title of project :
 *   Date of creation :
 *   Author(s) : PierreLgol
 *   github : https://github.com/pierrelgol
 *
 *   More on the project :
 *
 *   #TODO(s) :
 *
 *
 */

//--------------------[     DEPENDENCIES DECLARATION     ]--------------------//

#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

unsigned int bitpat_get(unsigned int x, int start_bit, int for_nbit);
unsigned int intSize();


int main() {
  int x = 10, startbit = 3, for_nbit = 1, res;

  res = bitpat_get(x,startbit ,for_nbit);

  printf("%d\n",res);
  return EXIT_SUCCESS;
}

unsigned int bitpat_get(unsigned int x, int start_bit, int for_nbit) {
  unsigned int mask = 1, sbit = start_bit, fbit = for_nbit, var = x, ret = 0;
  while(sbit-- > 0) var >>=1;
  mask = ( 1 << fbit ) - 1;

  while ( for_nbit-- > 0){
    ret |= (mask & var);
    mask>>=1;
  }
  return ret;
}

unsigned int intSize(){
  unsigned int val = ~0, bits = 0;
  while ( val != 0 ){
    val >>= 1;
    ++bits; 
  }
  return bits;
}
