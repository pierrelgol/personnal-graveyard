

/*
	WARNING : micro-benchmark not representative of anything in terms of real
	performance, just wanted to see if my implementation could be faster
	theoratically.
*/

#include <stdio.h>
#include <stdlib.h>

static int	cycles1 = 0;
static int	func_call1 = 0;

static int	cycles2 = 0;
static int	func_call2 = 0;

int	check_separator(char c, char *charset) // github
{
	int i;

	i = 0;
	func_call1++;
	while (charset[i] != '\0')
	{
		cycles1++;
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_strings(char *str, char *charset) // github
{
	int i;
	int count;

	count = 0;
	i = 0;
	func_call1++;
	while (str[i] != '\0')
	{
		cycles1++;
		while (str[i] != '\0' && check_separator(str[i], charset))
		{
			i++;
			cycles1++;
		}
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !check_separator(str[i], charset))
		{
			i++;
			cycles1++;
		}
	}
	return (count);
}

static int	ft_get_word_count(char *str, char *set)
{
	int	words;

	words = 0;
	func_call2++;
	while (*str)
	{
		cycles2++;
		while (*str && set[(unsigned int)*str] == 1)
		{
			++str;
			cycles2++;
		}
		while (*str && set[(unsigned int)*str] == 0)
		{
			++str;
			cycles2++;
		}
		if (set[(unsigned int)*(str - 1)] != 1)
			++words;
	}
	return (words);
}

int	ft_strlen_sep(char *str, char *charset) // gitbub
{
	int i;

	i = 0;
	func_call1++;
	while (str[i] && !check_separator(str[i], charset))
	{
		i++;
		cycles1++;
	}
	return (i);
}

static int	ft_get_word_len(char *str, char *set)
{
	int	word_length;

	func_call2++;
	word_length = 0;
	while (str[word_length] && set[(unsigned int)str[word_length]] != 1)
	{
		++word_length;
		cycles2++;
	}
	return (word_length);
}

char	*ft_word(char *str, char *charset) // github
{
	int len_word;
	int i;
	char *word;

	i = 0;
	func_call1++;
	len_word = ft_strlen_sep(str, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
		cycles1++;
	}
	word[i] = '\0';
	return (word);
}

static char	*ft_get_word(char *str, char *set)
{
	char	*word;
	int		word_len;
	int		i;

	i = 0;
	func_call2++;
	word_len = ft_get_word_len(str, set);
	word = (char *)malloc(sizeof(char) * (word_len + 1));
	if (word == NULL)
		return (NULL);
	while (i < word_len)
	{
		word[i++] = *str++;
		cycles2++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split1(char *str, char *charset) // github
{
	char **strings;
	int i;

	i = 0;
	func_call1++;
	strings = (char **)malloc(sizeof(char *) * (count_strings(str, charset)
			+ 1));
	while (*str != '\0')
	{
		cycles1++;
		while (*str != '\0' && check_separator(*str, charset))
		{
			str++;
			cycles1++;
		}
		if (*str != '\0')
		{
			strings[i] = ft_word(str, charset);
			i++;
			cycles1++;
		}
		while (*str && !check_separator(*str, charset))
		{
			str++;
			cycles1++;
		}
	}
	strings[i] = 0;
	return (strings);
}

char	**ft_split2(char *str, char *charset)
{
	char	**split;
	char	*set;
	int		i;

	func_call2++;
	set = (char[255]){0};
	while (*charset)
	{
		set[(unsigned int)*charset++] = 1;
		cycles2++;
	}
	i = 0;
	split = (char **)malloc(sizeof(char *) * (ft_get_word_count(str, set) + 1));
	while (*str)
	{
		cycles2++;
		while (*str && set[(unsigned int)*str] == 1)
		{
			++str;
			cycles2++;
		}
		if (*str && set[(unsigned int)*str] == 0)
			split[i++] = ft_get_word(str, set);
		while (*str && set[(unsigned int)*str] == 0)
		{
			cycles2++;
			++str;
		}
	}
	split[i] = NULL;
	return (split);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to generate a very long input string
char	*generate_long_input(char *pattern, int repetitions)
{
	int		pattern_len;
	int		input_len;
	char	*input;

	pattern_len = strlen(pattern);
	input_len = pattern_len * repetitions;
	input = (char *)malloc((input_len + 1) * sizeof(char));
	if (input == NULL)
	{
		perror("Memory allocation failed");
		exit(EXIT_FAILURE);
	}
	for (int i = 0; i < repetitions; i++)
	{
		memcpy(&input[i * pattern_len], pattern, pattern_len);
	}
	input[input_len] = '\0';
	return (input);
}

int	main(void)
{
	int		index;
	char	**split;
	char	**result;
	char	*pattern;
	int		repetitions;
	char	*long_input;

	pattern = "this is a test;";
	repetitions = 100;
	long_input = generate_long_input(pattern, repetitions);
	split = ft_split1(long_input, "xybcdxybcdxybcd;ghijk");
	result = ft_split2(long_input, "xybcdxybcdxybcd;ghijk");
	index = 0;
	while (split[index])
	{
		if (split[index - 1])
			free(split[index - 1]);
		if (result[index - 1])
			free(result[index - 1]);
		index++;
	}
	free(long_input);
	printf("\n\n");
	printf("----- Naive implementation -----\n");
	printf("cycles                      : %d\n", cycles1);
	printf("function calls              : %d\n\n", func_call1);
	printf("----- Opti implementation -----\n");
	printf("cycles                      : %d\n", cycles2);
	printf("function calls              : %d\n\n", func_call2);
	printf("cycles reduction            : %.2fx\n", ((float)(cycles1 - cycles2)
			/ cycles2));
	printf("function calls reduction    : %.2fx\n", ((float)(func_call1
				- func_call2) / func_call2));
	return (0);
}
