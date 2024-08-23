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

#define IS_DIGIT(c) ((c) >= '0' && (c) <= '9')
#define IS_ALPHABETIC(c) ( ((c) >= 'A' && (c) <= 'Z') || ((c) >= 'a' && (c) <= 'z') )
#define IS_SPECIAL(c) ( (IS_DIGIT(c) == 0 && IS_ALPHABETIC(c) == 0) )

int main()
{
	char ch;
	ch = 'b';
	assert(IS_SPECIAL(ch) == false);
	printf("Test....................Passed\n");
	ch = '%';
	assert(IS_SPECIAL(ch) == true);
	printf("Test....................Passed\n");
	ch = '^';
	assert(IS_SPECIAL(ch) == true);
	printf("Test....................Passed\n");
	ch = '\n';
	assert(IS_SPECIAL(ch) == true);
	printf("Test....................Passed\n");
	ch = '.';
	assert(IS_SPECIAL(ch) == true);
	printf("Test....................Passed\n");

return EXIT_SUCCESS;
}
