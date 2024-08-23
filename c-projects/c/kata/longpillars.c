#include <stdio.h>
#include <assert.h>

long pillars(int num_of_pillars, int distance, int width) {
  if ( num_of_pillars == 1) return 0;
  if ( num_of_pillars == 2) return 100 * distance;
  
  long int sum = 0;
  
  for ( int i = 1; i < num_of_pillars; i++ ){
    sum += (distance * 100 + width);
  }
  
  return sum;
}


int main(void){

  printf("%li\n",pillars(1,10,10));
  printf("%li\n",pillars(2,20,25));
  printf("%li\n",pillars(11,15,30));

  return 0;
}
