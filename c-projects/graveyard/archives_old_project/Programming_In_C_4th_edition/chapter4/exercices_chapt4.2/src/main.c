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

// 2. Write a program to generate and display a table of n and n 2 , for integer
// values of n ranging from 1 to 10. Be certain to print appropriate column
// headings.
int main()
{ 
	int n;

		printf("|   n   |  n^2  |\n");
		printf("|-------|-------|\n");
	for ( n = 1; n <= 10; n++ ){
		printf("| %5d | %5d |\n",n,(n*n));
	}
 
 return EXIT_SUCCESS;
}
