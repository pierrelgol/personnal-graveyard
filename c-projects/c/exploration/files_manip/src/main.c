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

typedef struct {
  int x, y;
} Point;

Point getPointInput(){
  puts("Enter x,y");
  Point res;
  scanf("%d %d",&res.x,&res.y);

  return res;
}

//--------------------[     MAIN METHOD     ]--------------------------------//

const size_t SIZE = 2;

int main() {

  Point *arr;

  arr = (Point*) malloc(sizeof(Point) * SIZE);
  
  for( size_t i = 0 ; i < SIZE ; i++ ){
    arr[i] = getPointInput();
  }
  
  FILE *fp;
  fp = fopen("file.bin", "wb");

  if (fp != NULL) {
    printf("file succesfully created\n");
    for( size_t i = 0; i < SIZE; i++ ){
    fwrite(arr+i, sizeof(Point), SIZE, fp);
    }
  }
  fclose(fp);

  return EXIT_SUCCESS;
}
