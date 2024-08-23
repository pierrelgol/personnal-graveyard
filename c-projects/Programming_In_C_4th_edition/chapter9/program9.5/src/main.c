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

// Program to illustrate the %s scanf format characters
int main(void) {
  
  char s1[81], s2[81], s3[81];
  
  printf("Enter text:\n");
  scanf("%s%s%s", s1, s2, s3);
  printf("\ns1 = %s\ns2 = %s\ns3 = %s\n", s1, s2, s3);
  
  return 0;
}
