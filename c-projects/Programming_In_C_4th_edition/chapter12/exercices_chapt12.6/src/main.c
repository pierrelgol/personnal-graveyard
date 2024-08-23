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
#include <stdbool.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

#define IS_UPPER_CASE(c) (c >= 'A' && c <= 'Z')

int main()
{
 char ch = 'A';
 
 assert(IS_UPPER_CASE(ch) == true);
 printf("Test....................Passed\n");
 ch = 'x';
 assert(IS_UPPER_CASE(ch) == false);
 printf("Test....................Passed\n");
 ch = '2';
 assert(IS_UPPER_CASE(ch) == false);
 printf("Test....................Passed\n");
 ch = 'B';
 assert(IS_UPPER_CASE(ch) == true);
 printf("Test....................Passed\n");
 ch = 'N';
 assert(IS_UPPER_CASE(ch) == true);
 printf("Test....................Passed\n");
 ch = 'F';
 assert(IS_UPPER_CASE(ch) == true);
 printf("Test....................Passed\n");
 ch = 'Z';
 assert(IS_UPPER_CASE(ch) == true);
 printf("Test....................Passed\n");

return EXIT_SUCCESS;
}
