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

void sort(int *p1, int *p2, int *p3){
 if ( *p1 > *p2){
  *p1 = *p1 ^ *p2;
  *p2 = *p1 ^ *p2;
  *p1 = *p1 ^ *p2;
 }
 if ( *p2 > *p3){
  *p2 = *p2 ^ *p3;
  *p3 = *p2 ^ *p3;
  *p2 = *p2 ^ *p3;
 }
 if ( *p1 > *p2){
  *p1 = *p1 ^ *p2;
  *p2 = *p1 ^ *p2;
  *p1 = *p1 ^ *p2;
 }
 if ( *p2 > *p3){
  *p2 = *p2 ^ *p3;
  *p3 = *p2 ^ *p3;
  *p2 = *p2 ^ *p3;
 }
}

int main()
{
 int a = 1, b = 2, c = 3;
 printf("a = %d, b = %d, c = %d\n",a,b,c);
 sort(&a,&b,&c);
 printf("a = %d, b = %d, c = %d\n",a,b,c);
 a = 1, b = 3, c = 2;
 sort(&a,&b,&c);
 printf("a = %d, b = %d, c = %d\n",a,b,c);
 a = 2, b = 1, c = 3;
 sort(&a,&b,&c);
 printf("a = %d, b = %d, c = %d\n",a,b,c);
 a = 2, b = 3, c = 1;
 sort(&a,&b,&c);
 printf("a = %d, b = %d, c = %d\n",a,b,c);
 a = 3, b = 2, c = 1;
 sort(&a,&b,&c);
 printf("a = %d, b = %d, c = %d\n",a,b,c);
 a = 3, b = 1, c = 2;
 sort(&a,&b,&c);
 printf("a = %d, b = %d, c = %d\n",a,b,c);

return EXIT_SUCCESS;
}
