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

char* intToString(int n){
 int negf = (n < 0 ? 1 : 0), i = 0, j = 0;
 n *= (negf == 1 ? -1 : 1);
 char buffer[16];
 
 while ( n != 0){
  buffer[i++] = (n % 10) + '0';
  n /= 10;
 }
 buffer[i] = '\0';
 char* res = (char*) malloc(sizeof(char) * i + negf);
 for( j = i; j >= 0+negf; j-- ){
  res[i-j+negf] = buffer[j-1];
 }
 if(negf == 1){
  res[0] = '-';
 }

 return res;
}
int main()
{


 printf("%s\n",intToString(-10));

return EXIT_SUCCESS;
}
