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

#define IS_ALPHABETIC(c) ( ((c) >= 'A' && (c) <= 'Z') || ((c) >= 'a' && (c) <= 'z') )


int main()
{

 char ch = 'A';
 
 assert(IS_ALPHABETIC(ch) == true);
 printf("Test....................Passed\n");
 ch = 'x';
 assert(IS_ALPHABETIC(ch) == true);
 printf("Test....................Passed\n");
 ch = '2';
 assert(IS_ALPHABETIC(ch) == false);
 printf("Test....................Passed\n");
 ch = '&';
 assert(IS_ALPHABETIC(ch) == false);
 printf("Test....................Passed\n");
 ch = '+';
 assert(IS_ALPHABETIC(ch) == false);
 printf("Test....................Passed\n");
 ch = 'F';
 assert(IS_ALPHABETIC(ch) == true);
 printf("Test....................Passed\n");
 ch = 'Z';
 assert(IS_ALPHABETIC(ch) == true);
 printf("Test....................Passed\n");

return EXIT_SUCCESS;
}
