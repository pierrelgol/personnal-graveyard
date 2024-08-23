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
#include <ctype.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

int main()
{
 char ch1 = '0', ch2 = 'A', ch3 = 'a';

 printf("%c : %i, %c : %i, %c : %i\n",ch1,isdigit('0'),ch2,isupper(ch2),ch3,isalpha(ch3));

return EXIT_SUCCESS;
}
