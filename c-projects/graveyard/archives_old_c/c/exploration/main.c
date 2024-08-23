#include <stdio.h>


int main(void)
{

	unsigned int i = 0;
	unsigned int count = 0;


	while(count++ < 10)
		printf("i = %u\n",i--);
	

	return (0);
}
