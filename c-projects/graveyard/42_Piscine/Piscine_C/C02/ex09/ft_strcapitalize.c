/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:32:23 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/17 10:31:15 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static inline int	ft_is_alnum(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static inline int	ft_tolower(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return ((ch - 'A') + 'a');
	return (ch);
}

static inline int	ft_toupper(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return ((ch - 'a') + 'A');
	return (ch);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	searching_word;

	if (str == (void *)0)
		return ((void *)0);
	i = 0;
	searching_word = 1;
	while (str[i])
	{
		if (searching_word == 1 && ft_is_alnum(str[i]))
		{
			searching_word = 0;
			str[i] = ft_toupper(str[i]);
			++i;
			while (str[i] && searching_word == 0)
			{
				str[i] = ft_tolower(str[i]);
				if (ft_is_alnum(str[i++]) == 0)
					searching_word = 1;
			}
		}
		else
			++i;
	}
	return (str);
}
