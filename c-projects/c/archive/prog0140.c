#include <stdio.h>

int main(){

  int x1, y1;

  printf("Enter the coordinates of your point :\n");
  scanf("%i %i",&x1,&y1);

  if (x1 > 0 && y1 > 0) {
    printf("The coordinates are in P1\n");
  }
  if (x1 < 0 && y1 > 0) {
    printf("The coordinates are in P2\n");
  }
  if (x1 < 0 && y1 < 0) {
    printf("The coordinates are in P3\n");
  }
  if (x1 > 0 && y1 < 0) {
    printf("the coordinates are in P4\n");
  }


  return 0;
}
