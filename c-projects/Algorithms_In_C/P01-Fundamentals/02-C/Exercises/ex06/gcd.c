#include <stdio.h>

int	gcd(int input1, int input2)
{
	int temp;

	while (input1 > 0)
	{
		printf("%d %d",input1, input2);
		if (input1 < input2)
		{
			temp = input1;
			input1 = input2;
			input2 = temp;
		}
		input1 = input1 - input2;
	}
	return (input2);
}

int	main(void)
{
	int input1, input2;

	while (scanf("%d %d",&input1, &input2) != EOF) 
	{
		if (input1 > 0 && input2 > 0)
			printf("input1 : %d , input2 : %d gcd : %d\n",input1, input2, gcd(input1, input2));
        }

	return (0);
}
