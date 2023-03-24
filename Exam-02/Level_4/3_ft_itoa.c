/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr); */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	int_len(int nbr)
{
	int	i;
	int	sign;

	i = 0;
	sign = 0;
	if (nbr < 0)
		sign = 1;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i + sign);
}

char	*ft_itoa(int nbr)
{
	char	*array;
	int		len;

	len = int_len(nbr);
	array = malloc(sizeof(char) * (len + 1));
	if (!array)
		return (NULL);
	array[len] = '\0';
	if (nbr < 0)
	{
		array[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
	{
		array[0] = 0 + '0';
	}
	len -= 1;
	while (nbr != 0)
	{
		array[len] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	return (array);
}

int	main(void)
{
	int x = -1234;
	char *new_array = ft_itoa(x);
	printf("%s", new_array);
}