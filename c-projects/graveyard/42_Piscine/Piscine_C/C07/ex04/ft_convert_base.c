/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:55:17 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/20 14:55:22 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_parse_base(char *base)
{
	int	sum;

	sum = 0;
	while (*base)
	{
		if (*base >= '0' && *base <= '9')
			sum += (*base - '0' + 1);
		else if (*base >= 'A' && *base <= 'F')
			sum += (*base - 'A' + 10);
		else
			break ;
		++base;
	}
	if (sum == 3)
		return (2);
	else if (sum == 55)
		return (10);
	else if (sum == 36)
		return (8);
	else if (sum == 130)
		return (16);
	return (0);
}

static char	*ft_filter_and_sign(char *str, int *sign)
{
	*sign = 0;
	while ((*str == ' ' || *str == '\t' || *str == '\n') || (*str == '\r'
			|| *str == '\f' || *str == '\v'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*sign = 1;
		str++;
	}
	return (str);
}

static unsigned int	ft_atoi_base(char *str, char *base, int *sign)
{
	int	ret;
	int	rdx;

	rdx = ft_parse_base(base);
	if (rdx == 0)
		return (0);
	str = ft_filter_and_sign(str, sign);
	ret = 0;
	while (*str)
	{
		if ((*str >= '0' && *str <= '9') || (*str >= 'A' && *str <= 'F'))
		{
			if (*str >= 'A' && *str <= 'F')
				ret = ("ABCDEF"[*str - 'A'] - 'A' + 10) + ret * rdx;
			else
				ret = ("0123456789"[*str - '0'] - '0') + ret * rdx;
		}
		++str;
	}
	return (ret);
}

static void	ft_reverse_string(char *str, unsigned int slen, int is_neg)
{
	int		i;
	int		j;
	char	temp;

	i = is_neg;
	j = slen - 1;
	while (i < j)
	{
		temp = str[i];
		str[i++] = str[j];
		str[j--] = temp;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*converted;
	int		rdx;
	int		is_neg;
	int		ir;
	int		i;

	if (!nbr || !base_from || !base_to)
		return (NULL);
	rdx = ft_parse_base(base_to);
	ir = ft_atoi_base(nbr, base_from, &is_neg);
	i = 0;
	converted = (char *)malloc(sizeof(char) * 34);
	if (is_neg == 1)
		converted[i++] = '-';
	if (ir == 0)
		converted[i] = '0';
	while (ir > 0)
	{
		converted[i++] = "0123456789ABCDEF"[ir % rdx];
		ir /= rdx;
	}
	ft_reverse_string(converted, i, is_neg);
	converted[i] = '\0';
	return (converted);
}

// void	ft_print_test(char *src, char *bf, char *bt)
// {
// 	char	*ret;

// 	ret = ft_convert_base(src, bf, bt);
// 	__builtin_printf("ret = %s\n", ret);
// 	if (ret)
// 		free(ret);
// }

// int	main(int argc, char **argv)
// {
// 	if (argc == 4)
// 		ft_print_test(argv[1], argv[2], argv[3]);
// 	return (0);
// }
