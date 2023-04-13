#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
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
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	out = (char **)malloc(sizeof(char *) * (wc + 1));

	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
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
	char **double_arr;
	double_arr = ft_split(av[1]);
	int i = 0;
	int j = 0;
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

