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

int gdc(int a, int b){

	while( b != 0){
		int remainder = a % b;
		a = b;
		b = remainder;
	}
	return a;
}

int lcm(int a, int b){
	int lcm = (a * b) / gdc(a,b);
	return lcm;
}

int main()
{
	int u, v;

	printf("Enter the value for u and v : \n");
	scanf(" %d %d",&u ,&v);
	printf("The lcm of %d and %d is %d\n",u,v,lcm(u,v));

return EXIT_SUCCESS;
}