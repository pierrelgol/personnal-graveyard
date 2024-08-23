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

#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

int main() {
  int n, n_reverse = 0;

  printf("Enter an integer");
  scanf("%d", &n);

  printf("In English %d is : ",n);
  do {
    n_reverse += n % 10;
    n_reverse *= 10;
    n /= 10;
  } while (n != 0);

  if(n_reverse == 0)
    printf("zero ");

  do{
    
    n_reverse /= 10;
    n = n_reverse % 10;
    
    if(n_reverse != 0 ){
      
      switch(n){
        case 0 : printf("zero "); break;
        case 1 : printf("one "); break;
        case 2 : printf("two "); break;
        case 3 : printf("three "); break;
        case 4 : printf("four "); break;
        case 5 : printf("five "); break;
        case 6 : printf("six "); break;
        case 7 : printf("seven "); break;
        case 8 : printf("eight "); break;
        case 9 : printf("nine "); break;
      }
    
    }
    
  }while( n_reverse != 0);
  
  printf("\n");

  return EXIT_SUCCESS;
}
