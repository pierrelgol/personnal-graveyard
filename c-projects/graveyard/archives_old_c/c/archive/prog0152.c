#include <stdio.h>

int main(){

  const char ch = '*';
  int i, j, k, row, col, spacing;
  _Bool inputIsValid;

  printf("Enter the number of row, col and spacing in the format [row : col : spacing].\n");
  scanf("%i : %i : %i",&row,&col,&spacing);

  inputIsValid = ( (row >= 0 && col >= 0 && spacing >= 0) ? 1 : 0);

  if (inputIsValid) {

    for ( i = 0; i < row ; ++i ) {
      printf("\n");
      for ( j = 0; j < col ; ++j ) {
        printf("%c",ch);
        for ( k = 0; k < spacing; ++k ) {
          printf(" ");
        }
      }
    }
  }else {
    printf("program doesn't take any negative input\n");
    return 1;
  }

  return 0;
}
