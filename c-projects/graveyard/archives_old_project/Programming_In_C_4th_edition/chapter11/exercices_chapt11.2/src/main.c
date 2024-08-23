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

//--------------------[     MAIN METHOD     ]--------------------------------//

bool isShiftLogic();

int main()
{

 printf("%s\n",isShiftLogic() == true ? "The implementation of right shift is Logical" : "The implementation of right shift is Arithmetic");

return EXIT_SUCCESS;
}

bool isShiftLogic(){
 int value = -1, result = value >> 1;
 return (result < 0);
}
