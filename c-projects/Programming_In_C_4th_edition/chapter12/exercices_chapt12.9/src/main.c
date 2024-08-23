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
#include <stdbool.h>
#include <assert.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

#define ABSOLUTE_VALUE(x) ((x) > (0) ? (x) : -(x))

int main()
{
 int x;

 x = 10;
 assert(ABSOLUTE_VALUE(x) == 10);
 printf("Test....................Passed\n");
 x = -10;
 assert(ABSOLUTE_VALUE(x) == 10);
 printf("Test....................Passed\n");
 x = -4;
 assert(ABSOLUTE_VALUE(x-9) == 13 );
 printf("Test....................Passed\n");

return EXIT_SUCCESS;
}