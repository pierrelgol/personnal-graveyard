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

// Function to use linked lists
int main(void) {
  struct entry {
    int value;
    struct entry *next;
  };
  struct entry n1, n2, n3;
  int i;
  n1.value = 100;
  n2.value = 200;
  n3.value = 300;
  n1.next = &n2;
  n2.next = &n3;
  i = n1.next->value;
  printf("%i ", i);
  printf("%i\n", n2.next->value);
  return 0;
}
