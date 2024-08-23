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
#include <stdint.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

#define NTH_FIB 20

int main()
{
	uint64_t fib_Nm2 = 0, fib_Nm1 = 1 , fib_Nm0 = 0;

	for( size_t i = NTH_FIB; i != 0; --i ){
		fib_Nm0 = fib_Nm2 + fib_Nm1;
		fib_Nm2 = fib_Nm1;
		fib_Nm1 = fib_Nm0;
		printf("%lu, ",fib_Nm0);
		fib_Nm0 = 0;
	}


return EXIT_SUCCESS;
}
