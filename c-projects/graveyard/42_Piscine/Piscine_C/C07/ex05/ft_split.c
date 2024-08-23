/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:12:06 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/20 14:55:44 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static int	ft_get_wcount(char *str, char *set)
{
	int	words;

	words = 0;
	while (*str)
	{
		while (*str && set[(unsigned int)*str] == 1)
			++str;
		while (*str && set[(unsigned int)*str] == 0)
			++str;
		if (set[(unsigned int)*(str - 1)] != 1)
			++words;
	}
	return (words);
}

static int	ft_get_wlen(char *str, char *set)
{
	int	word_length;

	word_length = 0;
	while (str[word_length] && set[(unsigned int)str[word_length]] != 1)
		++word_length;
	return (word_length);
}

static char	*ft_get_word(char *str, char *set)
{
	char	*word;
	int		word_len;
	int		i;

	i = 0;
	word_len = ft_get_wlen(str, set);
	word = (char *)malloc(sizeof(char) * (word_len + 1));
	if (word == NULL)
		return (NULL);
	while (i < word_len)
		word[i++] = *str++;
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	char	*set;
	int		i;

	set = (char [255]){0};
	while (*charset)
		set[(unsigned int)*charset++] = 1;
	i = 0;
	split = (char **)malloc(sizeof(char *) * (ft_get_wcount(str, set) + 1));
	while (*str)
	{
		while (*str && set[(unsigned int)*str] == 1)
			++str;
		if (*str && set[(unsigned int)*str] == 0)
			split[i++] = ft_get_word(str, set);
		while (*str && set[(unsigned int)*str] == 0)
			++str;
	}
	split[i] = NULL;
	return (split);
}
