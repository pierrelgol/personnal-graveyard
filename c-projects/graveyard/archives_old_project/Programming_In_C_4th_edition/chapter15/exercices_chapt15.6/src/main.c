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

#define BUF_LINE_COUNT 20
#define BUF_LINE_LENGTH 81 

int main()
{
	const char file_name[] = "file1";
	FILE* fp = fopen(file_name,"r"), *out = stdout;
	char buffer[BUF_LINE_COUNT][BUF_LINE_LENGTH];
	size_t i;
	int cmd = 0;
	if(fp){

		while(cmd != 'q'){
			i = 0;
			
			for( ; i < BUF_LINE_COUNT; ){
				fgets(buffer[i++],BUF_LINE_LENGTH,fp);				
			}
			for( i = 0 ; i < BUF_LINE_COUNT; ){
				fprintf(out,"%s",buffer[i++]);				
			}

			puts("Enter 'q' to stop or anything else to continue");
			cmd = getchar();
		}
		
	}

return EXIT_SUCCESS;
}

