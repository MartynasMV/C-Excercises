/* Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$ */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *s)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (s[i] == ' ' || s[i] >= 9 && s[i] <= 13)
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + s[i] - '0';
		i++;
	}
	return (result * sign);
}

void	ft_putnumber(int nbr)
{
	char	str[] = "0123456789abcdef";
	if (nbr > 15)
		ft_putnumber(nbr / 16);
	write(1, &str[nbr % 16], 1);
}

int	main(int ac, char **av)
{
	int	x;

	if (ac == 2)
	{
		x = ft_atoi(av[1]);
		ft_putnumber(x);
	}
	write(1, &"\n", 1);
}
