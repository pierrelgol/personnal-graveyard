#include <stdio.h>

int main(){

  int row, col, n, current_width, count = 1;
  char fill = ' ';
  _Bool inputIsValid;

  printf("Enter the Height of the pyramid :\n");
  scanf("%i",&n);

  inputIsValid = (n > 0 ? 1 : 0);

  if (inputIsValid) {

    current_width = n * 2;

    for ( row = 0; row < n; ++row ) {
      for ( col = 0; col < current_width; ++col ) {

        if (col == (n - row)) {
          while (col - (n+row) != 1) {
            printf("%-5i",count);
            ++col;
            ++count;
          }
        }else {
          printf("  %c  ",fill);
        }
      }
      printf("\n");
    }
    printf("\n");
  }

  return 0;

}
