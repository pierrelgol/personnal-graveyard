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
#include <stdint.h>

void printBinOf(int n);

//--------------------[     MAIN METHOD     ]--------------------------------//

int main() {
  int32_t bin;
	system("clear");
	printf("Enter an integer to convert to binary\n");
	scanf("%d",&bin);
	printBinOf(bin);
	
  return EXIT_SUCCESS;
}

void printBinOf(int n) {
	int i, bit = 0;
	for ( i = 31; i >= 0; i-- ){
		bit = (n >> i) & 1;
		printf("%d",bit);
	}
		printf("\n");
}
