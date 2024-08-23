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

char toUperCase(char ch){
 if ( ch >= 'A' && ch <= 'Z') return ch;
 if ( ch >= 'a' && ch <= 'z') return ( ch - 'a' + 'A');
 return '\a';
}


int main()
{
 printf("c to uppercase = %c\n",toUperCase('c'));

return EXIT_SUCCESS;
}
