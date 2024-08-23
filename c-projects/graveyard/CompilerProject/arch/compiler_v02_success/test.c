#include <stdio.h>

#define MACRO "hello World\n"

/* this is a very useful comment */

void	foo(int bar)
{
	int my_var;
	char my_var2;

	my_var2 = bar;
	my_var = bar + bar;
}

int	main(void)
{
	printf(MACRO);
	return (0);
}
