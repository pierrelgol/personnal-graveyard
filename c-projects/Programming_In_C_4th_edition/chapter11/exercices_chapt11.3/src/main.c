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

int intSize(){
 signed int value = ~0, bcount = 0;
 while ( value != 0 ){
  value<<=1;
  bcount++;
 }
 return bcount;
}

int main()
{

 printf("%d",intSize());

return EXIT_SUCCESS;
}
