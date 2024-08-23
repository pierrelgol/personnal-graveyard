# 9. Rewrite Programs 4.2 through 4.5 , replacing all uses of the for statement with equivalent while statements. Run each program to verify that both versions are identical.

### Program 4.2 :
```C
//--------------------[     DEPENDENCIES DECLARATION     ]--------------------//

#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

/* Program to calculate the 200th triangular number
 Introduction of the for statement */

int main(void)
{
  int n, triangularNumber;
  triangularNumber = 0;
  
  // for (n = 1; n <= 200; n = n + 1)
  //   triangularNumber += triangularNumber + n;

  while( n <= 200 ){
    triangularNumber += triangularNumber + n;
    n++;
  }
  
  printf("The 200th triangular number is %i\n", triangularNumber);
  
  return 0;
}

```

### Program 4.3 :

```C
//--------------------[     DEPENDENCIES DECLARATION     ]--------------------//

#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

// Program to generate a table of triangular numbers

int main(void)
{
  int n, triangularNumber;
  
  printf("TABLE OF TRIANGULAR NUMBERS\n\n");
  printf(" n Sum from 1 to n\n");
  printf("--- ---------------\n");
  
  triangularNumber = 0;
  n = 1;
  
  // for (n = 1; n <= 10; ++n) {
  //   triangularNumber += n;
  //   printf(" %i %i\n", n, triangularNumber);
  // }
  
  while( n <= 10 ){
    triangularNumber += n;
    printf(" %i %i\n", n, triangularNumber);
    n++;
  }
  
  return 0;
}
```
### Program 4.4 :

```C
//--------------------[     DEPENDENCIES DECLARATION     ]--------------------//

#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//
int main(void) {
  
  int n, number, triangularNumber;
  
  printf("What triangular number do you want? ");
  scanf("%i", &number);
  triangularNumber = 0;
  n = 1;
  
  // for (n = 1; n <= number; ++n)
  //   triangularNumber += n;

  while( n <= number ){
    triangularNumber += n;
    n++;
  }
  
  printf("Triangular number %i is %i\n", number, triangularNumber);
  
  return 0;
}
```
### Program 4.5 :

```C
//--------------------[     DEPENDENCIES DECLARATION     ]--------------------//

#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

int main(void)
{
  int n, number, triangularNumber, counter;
  
  // for (counter = 1; counter <= 5; ++counter) {
    
  //   printf("What triangular number do you want? ");
  //   scanf("%i", &number);
  //   triangularNumber = 0;
    
  //   for (n = 1; n <= number; ++n)
  //     triangularNumber += n;
  //   printf("Triangular number %i is %i\n\n", number, triangularNumber);
  // }

  while ( counter <= 5 ){
    
    printf("What triangular number do you want? ");
    scanf("%i", &number);
    triangularNumber = 0;
        
    while ( n <= number ){
      triangularNumber += n;
      n++;
    }
    ++counter;
    printf("Triangular number %i is %i\n\n", number, triangularNumber);
  }
  
  return 0;
}
```