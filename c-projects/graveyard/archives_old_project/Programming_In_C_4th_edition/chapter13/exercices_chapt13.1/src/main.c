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

typedef int (*FunctionPtr)(void);

int foo(void){
 return 7;
}

int main()
{
 FunctionPtr p = &foo;

 printf("Funtion ptr is pointing to the function foo() which return the value %d\n",p());

return EXIT_SUCCESS;
}
