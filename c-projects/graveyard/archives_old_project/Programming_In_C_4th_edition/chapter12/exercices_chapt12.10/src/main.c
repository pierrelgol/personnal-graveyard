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

#define printint(n) printf("%i\n", n)

int main()
{
	int i = 1, bound = 100;
	for( ; i <= bound; ++i ){
		printint(i);
	}

return EXIT_SUCCESS;
}
