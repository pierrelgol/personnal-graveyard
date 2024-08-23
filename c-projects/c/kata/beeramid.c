#include <assert.h>
#include <ctype.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int beeramid(double bonus, double price);

int main(void) {

  assert(beeramid(1500, 2) == 12);
  printf("Test Passed\n");

  return EXIT_SUCCESS;
}

int beeramid(double bonus, double price) {
  int beerCount = bonus / price;
  int prev_floor = 0, floorCount = 1, i = 0;

  do {
    prev_floor = (floorCount * floorCount);
    beerCount -= prev_floor;
    i++;
    floorCount++;
  } while ((beerCount - (floorCount * floorCount)) > 0);

  
    return floorCount - 1;
  }