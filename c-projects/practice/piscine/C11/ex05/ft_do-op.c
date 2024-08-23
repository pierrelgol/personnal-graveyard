#include <unistd.h>

static inline int	ft_isspace(int n)
{
	if (n == ' ' || n == '\t' || n == '\n')
		return (1);
	if (n == '\r' || n == '\f' || n == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		++str;
	}
	return (sign * result);
}

int ft_add(int n1, int n2)
{
	return (n1 + n2);
}
int ft_sub(int n1, int n2)
{
	return (n1 - n2);
}
int ft_mul(int n1, int n2)
{
	return (n1 * n2);
}
int ft_div(int n1, int n2)
{
	return (n1 / n2);
}
int ft_rem(int n1, int n2)
{
	return (n1 % n2);
}

int main(int argc, char **argv)
{
	int num1;
	int num2;
	char operator;
	int (*op[5])(int, int);
	(void)argc;

	op[0] = ft_add;
	op[1] = ft_sub;
	op[2] = ft_mul;
	op[3] = ft_div;
	op[4] = ft_rem;

	num1 = ft_atoi(argv[1]);
	operator = *argv[2];
	num2 = ft_atoi(argv[3]);

	if(operator == '+')
		__builtin_printf("%d %c %d = %d\n",num1, operator, num2, op[0](num1,num2));
	else if(operator == '-')
		__builtin_printf("%d %c %d = %d\n",num1, operator, num2, op[1](num1,num2));
	else if(operator == '/' && num2 != 0)
		__builtin_printf("%d %c %d = %d\n",num1, operator, num2, op[3](num1,num2));
	else if(operator == '%' && num2 != 0)
		__builtin_printf("%d %c %d = %d\n",num1, operator, num2, op[4](num1,num2));
	else if(operator == 'x')
		__builtin_printf("%d %c %d = %d\n",num1, operator, num2, op[2](num1,num2));
	
	return (0);
}
