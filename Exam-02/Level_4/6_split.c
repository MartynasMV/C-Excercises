/*
Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str); */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	word_count(char *str)
{
	int	word_count;

	word_count = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	while (*str != '\0')
	{
		word_count++;
		while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
			str++;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
	}
	return (word_count);
}
int	word_len(char *str)
{
	int i = 0;

	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	return (i);
}

char	*word_dupe(char *str)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = word_len(str);
	word = malloc(sizeof(char) * (len + 1));
	word[len] = '\0';
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

void fill_words(char **array, char *str)
{
	int	word_index;

	word_index = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	while (*str != '\0')
	{
		array[word_index] = word_dupe(str);
		word_index++;
	
	    while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
		    str++;
	    while (*str == ' ' || *str == '\t' || *str == '\n')
		    str++;
    }
}

char	**ft_split(char *str)
{
	int		words;
	char	**array;

	words = word_count(str);
	array = malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	array[words] = 0;
	fill_words(array, str);
	return (array);
}

int	main(int ac, char **av)
{
	char **double_arr;
	int i = 0;
	int j = 0;
	double_arr = ft_split(av[1]);

	(void)ac;
	while (double_arr[i])
	{
		j = 0;
		while (double_arr[i][j])
		{
			printf("%c", double_arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}