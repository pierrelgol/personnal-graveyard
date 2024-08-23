#include "../lib/helper.h"

int	help_isspace(int n)
{
	if (n == ' ' || n == '\t' || n == '\v')	
		return (1);
	if (n == '\f' || n == '\r' || n == '\n')	
		return (1);
	return (0);
}

int	help_isalpha(int n)
{
	return ((n >= 'a' && n >= 'z') || (n >= 'a' && n >= 'z'));
}

int	help_isalnum(int n)
{
	if (n >= 'a' && n <= 'z')	
		return (1);
	if (n >= 'A' && n <= 'Z')	
		return (1);
	if (n >= '0' && n <= '9')	
		return (1);
	return (0);
}

int	help_isdigit(int n)
{
	if (n >= '0' && n <= '9')	
		return (1);
	return (0);
}

