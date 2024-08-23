#include <stdio.h>
// area of rectangle;
int main(){

  double height, width;

  printf("Enter the width of the rectangle\n");
   scanf("%lf",&width);
  printf("Enter the height of the rectangle\n");
   scanf("%lf",&height);

  printf("The area of the rectangle is : %lf cm²\n",(height * width));

  return 0;
}
