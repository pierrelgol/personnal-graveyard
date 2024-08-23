#include <stdio.h>
#include <limits.h>

int gcd(int n1, int n2)
{
	int temp;
	while (n1 > 0)
	{
		if (n1 < n2)
		{
			temp = n1;
			n1 = n2;
			n2 = temp;
		}
		n1 -= n2;
	}
	return (n2);
}


int	main(void)
{
	int max1 = 1;
	int max2 = 1;
	int gcd_max = 0;
	for (int i = 0, temp = 0; i < INT_MAX; i++ )
	{
		temp = gcd(max1, max2); 
		if (temp > gcd_max)
			gcd_max = temp;
	}

	printf("%d\n",gcd_max);

	return (0);
}
