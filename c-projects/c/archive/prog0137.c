#include <stdio.h>

int main(){

	int input1, input2;

	printf("Enter an integer :\n");
	scanf("%i",&input1);

	printf("Enter an integer :\n");
	scanf("%i",&input2);
	
	printf((input1 == input2 ? ("True\n") : ("false\n")));
 
	return 0;
}
