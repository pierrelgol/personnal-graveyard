#include <stdio.h>

int main(){

  double rectangle_width, rectangle_height;

  printf("Enter the width of your rectangle :\n");
  scanf("%lf",&rectangle_width);

  printf("Enter the height of your rectangle :\n");
  scanf("%lf",&rectangle_height);

  printf("The perimeter of your rectangle is : %lf cm\n",( rectangle_width +rectangle_height) *2);

return 0;

}
