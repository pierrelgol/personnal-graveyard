#include <stdio.h>

#define N 1000

int	main(void) {
	
	int i, j, prime[N + 1];

	for (prime[1] = 0, i = 2; i <= N; i++) prime[i] = 1;
	for (i = 2; i <= (N / 2); i++)
	{
		for (j = 2; j <= (N / i); j++)
			prime[i * j] = 0;
	}
	for (i = 1; i <= N; i++)
	{
		if (prime[i])
			printf("%4d,",i);
	}
	printf("\n");

	return (0);
}
