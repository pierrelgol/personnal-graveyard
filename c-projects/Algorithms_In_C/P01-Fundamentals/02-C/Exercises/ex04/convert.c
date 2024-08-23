#include <stdio.h>

int	convert(const char *nbr)
{
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	while (*nbr && (*nbr == ' ' || (*nbr >= 9 && *nbr <= 13)))
		++nbr;
	if (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			sign *= -1;
		++nbr;
	}
	while (*nbr && (*nbr >= '0' && *nbr <= '9'))
		result = (*nbr++ - '0') + (result * 10);
	return (result * sign);	
}

int	main(void)
{
	char nbr[13];

	while (scanf("%12s", nbr) != EOF) {
        	printf("result = %d\n",convert(nbr));
        }

	return (0);
}
