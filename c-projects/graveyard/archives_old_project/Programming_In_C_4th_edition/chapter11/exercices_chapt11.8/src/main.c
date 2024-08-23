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

void bitpat_set(unsigned int *x, unsigned int value, int start_bit,
                int field_size);

int main() {
  unsigned int x = 10;
  bitpat_set(&x, 5, 0, 4);
  printf("%u\n", x);

  return EXIT_SUCCESS;
}

void bitpat_set(unsigned int *x, unsigned int value, int start_bit, int field_size) {
  unsigned int mask = (1 << field_size) - 1;
  mask <<= start_bit;
  *x &= (~mask); //
  value <<= start_bit;
  *x |= (mask & value);

}
  /*
  Note for me later;
  [ *x == 10, start_bit == 0, field_size = 4, value = 5 ]
  mask (1<<4) - 1:

  mask  0b : .... .... .... 0000 1111

  *x &= ( ~mask ) :

  *x    0b : .... .... .... 0000 1010
  ~mask 0b : .... .... .... 1111 0000
  firstbit  ( 0 & 0 --> 0)
  secondbit ( 0 & 0 --> 0)
  thirdbit  ( 0 & 0 --> 0)
  fourthbit ( 0 & 0 --> 0)
  *x    0b : .... .... .... 0000 0000

  value <<= 0 :
  value 0b : .... .... .... 0000 0101

  *x |= ( mask & value ) :

  firstbit   ( 1 & 1 ) -> 1 | 0 -> 1
  secondtbit ( 1 & 0 ) -> 0 | 0 -> 0
  thirdbit   ( 1 & 1 ) -> 1 | 0 -> 1
  fourthtbit ( 1 & 0 ) -> 0 | 0 -> 0
  *x    0b : .... .... .... 0000 0101
  
  */
