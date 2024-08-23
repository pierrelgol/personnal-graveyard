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
#include <assert.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

#define MAX3(x,y,z) ((x) > (y) ? ((x) > (z) ? x : z) : ((y) > (z) ? y : z))

int main()
{

 assert(MAX3(10,8,9) == 10);
 printf("Test....................Passed\n");
 assert(MAX3(10,9,8) == 10);
 printf("Test....................Passed\n");
 assert(MAX3(9,8,10) == 10);
 printf("Test....................Passed\n");
 assert(MAX3(9,10,8) == 10);
 printf("Test....................Passed\n");
 assert(MAX3(8,9,10) == 10);
 printf("Test....................Passed\n");
 assert(MAX3(8,10,9) == 10);
 printf("Test....................Passed\n");
 
return EXIT_SUCCESS;
}
