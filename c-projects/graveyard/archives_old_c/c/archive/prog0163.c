#include <stdio.h>

int main(){

  int table_of,i,bound = 0;

  printf("select your table and the range to display (bound = 0 --> default is 10) :\n");
  scanf("%i %i",&table_of,&bound);

  for ( i = 1; ((bound > 0) ? (i <= bound) : (i <= 10)); ++i ) {
    printf("%2i x %2i = %2i\n", table_of, i, (table_of*i) );
  }

  return 0;
}
