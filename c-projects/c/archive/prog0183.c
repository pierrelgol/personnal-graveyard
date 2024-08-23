#include <stdio.h>

#define SIZE 5

int main(){

  int i, neighbors[SIZE] = {0};
  _Bool hasGoodNeighbors = 0;

  for ( i = 0; i < SIZE; ++i ) {
    printf("Enter the value for your Array[%i]\n",i);
    scanf("%i",&neighbors[i]);
  }

  for ( i = 1; i < (SIZE-1); ++i ) {
    if (neighbors[i] == (neighbors[i-1] * neighbors[i+1]) ) { 
    hasGoodNeighbors = 1;
    break;
    }
  }
  printf(hasGoodNeighbors == 1 ? "Array has good neighbors\n" : "Array doesn't have good neighbors\n");

  return 0;
}
