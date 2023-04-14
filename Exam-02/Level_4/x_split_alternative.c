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

char	**ft_split(char *str); */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dst, char *src, int n)
{
	int	i;

	i = 0;
	while (i < n && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	int		wc;
	char	**out;

	i = 0;
	j = 0;
	k = 0;
	wc = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\n'))
		{
			i++;
		}
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\n'))
		{
			i++;
		}
	}
	out = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(out[k++], &str[j], (i - j));
		}
	}
	out[k] = NULL;
	return (out);
}

int	main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	(void)ac;
	char **double_array;
	double_array = ft_split(av[1]);
	while (double_array[i])
	{
		j = 0;
		while (double_array[i][j])
		{
			printf("%c", double_array[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}