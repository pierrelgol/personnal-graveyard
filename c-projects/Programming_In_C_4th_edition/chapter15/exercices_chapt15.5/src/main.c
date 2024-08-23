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

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

#define LBUFF_SIZE 128

int strToInt(const char *string);
int main(int argc, char **argv) {
  const char fileName[] = "file1";
  size_t col_start = strToInt(argv[--argc]);
  size_t col_end = strToInt(argv[--argc]);

  FILE* fp = fopen(fileName,"r"), *out = stdout;
  char line1[LBUFF_SIZE], *p;
  while( (fgets(line1,LBUFF_SIZE,fp) != NULL) ){

    for( p = line1 + col_start; p < line1+col_end ; ++p ){
      fprintf(out,"%c",*p);
    }
    puts("");
  }

  return EXIT_SUCCESS;
}
int strToInt(const char *string) {
  int i, intValue, result = 0, neg_f = (string[0] == '-' ? 1 : 0);
  for (i = neg_f; string[i] >= '0' && string[i] <= '9'; ++i) {
    intValue = string[i] - '0';
    result = result * 10 + intValue;
  }
  return (neg_f == 1 ? -result : result);
}
