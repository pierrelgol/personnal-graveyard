#include <stdio.h>





  int ComputeAreaOfRectangle(int height, int width){
  return (height * width);
}


int main(){

  int ComputeAreaOfRectangle(int height, int width);
  
  int height, width, area;
  _Bool isValid;

  printf("Enter the height and the width of your rectangle :\n");
  scanf("%i %i",&height,&width);

  isValid = ((height >= 1 && width >= 1) ? 1 : 0);

  if (isValid) {
   area = ComputeAreaOfRectangle(height, width);
    printf("The area of the rectangle is : %i cm^2\n",area);
  }else {
    printf("Invalid input\n");
    return 1;
  }

  return 0;
}
