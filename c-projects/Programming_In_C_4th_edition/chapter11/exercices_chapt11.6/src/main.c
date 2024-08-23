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

int bitpat_search(unsigned int source, int pattern, int n);

int main() {
  int index = index = bitpat_search(0xe1f4, 0x5, 3);
  printf("index = %d\n", index);
  return EXIT_SUCCESS;
}

int bitpat_search(unsigned int source, int pattern, int n) {
  unsigned int i = 0, mask, j;
  while (source != 0) {
    j = n;
    mask = pattern;
    source >>= 1;
    
    if((source & mask) == (mask & pattern)){
      
      while ((source & mask) == (mask & pattern) ){
        source >>= 1;
        mask>>= 1;
        --j;
      }
      
      if(j == 0){
        return i;
      }
    }
    i++;
  }
  return i;
}
