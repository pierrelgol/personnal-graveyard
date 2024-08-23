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

void transposeMatrix( int arr1[4][5],size_t r1, size_t c1, size_t r2, size_t c2, int arr2[5][4]){

  for(size_t i = 0; i < r1 && i < c2; i++){
    for(size_t j = 0; j < c1 && i < r2; j++){
      arr1[i][j] = arr2[j][i];
    }
  }
}

void printMatrix(int arr[4][5], size_t row, size_t col){
  for(size_t i = 0; i < row; i++){
    printf("\n");
    for(size_t j = 0; j < col; j++){
      printf("%d, ",arr[i][j]);
    }
  }
    printf("\n");
}
void printMatrix2(int arr[5][4], size_t row, size_t col){
  for(size_t i = 0; i < row; i++){
    printf("\n");
    for(size_t j = 0; j < col; j++){
      printf("%d, ",arr[i][j]);
    }
  }
    printf("\n");
}

int main() {

  int arr1[4][5] = {{1 ,2 ,4, 5, 5},
                    {1 ,2 ,4, 5, 5},
                    {1 ,2 ,4, 5, 5},
                    {1 ,2 ,4, 5, 5}};
  
  int arr2[5][4] = {{1 ,2 ,4, 5},
                    {1 ,2 ,4, 5},
                    {1 ,2 ,4, 5},
                    {1 ,2 ,4, 5},
                    {1 ,2 ,4, 5}};
  printMatrix(arr1,4,5);
  printMatrix2(arr2,5,4);
  transposeMatrix(arr1,4,5,5,4,arr2);
  printMatrix(arr1,4,5);
  printMatrix2(arr2,5,4);
  return EXIT_SUCCESS;
}
