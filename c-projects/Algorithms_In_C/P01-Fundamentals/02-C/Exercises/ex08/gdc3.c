#include <stdio.h>

int	gdc(int n1, int n2)
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
	int n1, n2 ,n3, gdc1, gdc2, gdc3;

	while (scanf("%d %d %d", &n1, &n2, &n3) != EOF)
	{
		if (n1 > 0 && n2 > 0 && n3 > 0)
		{
			gdc1 = gdc(n1, n2);
			gdc2 = gdc(n2, n3);
			gdc3 = gdc(gdc1, gdc2);
			printf("The gdc of (%d, %d, %d) is %d\n",n1 ,n2, n3, gdc3);
		}
	}

	return (0);
}
