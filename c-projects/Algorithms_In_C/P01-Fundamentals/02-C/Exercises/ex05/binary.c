#include <stdio.h>
#include <unistd.h>

void	binary(int number)
{
	if (number == 0)
		return;
	binary(number / 2);
	write(1 , &"0123456789"[number % 2], 1);
}

int	main(void)
{
	int	number;

	while (scanf("%d", &number) != EOF) {
		if (number >= 0)
			binary(number);
        }
}
