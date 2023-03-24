/* Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$> */
#include <stdio.h>
#include <unistd.h>

void	ft_putnumber(int n)
{
	char	c;

	if (n > 9)
		ft_putnumber(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	ft_atoi(char *s1)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s1 && (s1[i] == ' ' || (s1[i] >= 9 && s1[i] <= 13)))
		i++;
	if (s1[i] == '-' || s1[i] == '+')
	{
		i++;
	}
	while (s1 && (s1[i] >= '0' && s1[i] <= '9'))
	{
		result += result * 10 + s1[i] - '0';
		i++;
	}
	return (result); //no need to use sign 1 as integers are only positive
}

int	ft_prime(int nbr)
{
	int	check;

	check = 2;
	if (nbr == 2)
		return (1);
	while (check <= nbr / 2)
	{
		if (nbr % check == 0)
			return (0);
		check++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int nbr = ft_atoi(av[1]);
		int i = 2;
		int sum = 0;
		while (i <= nbr)
		{
			if (ft_prime(i) == 1)
				sum += i;
			i++;
		}
		ft_putnumber(sum);
	}
	write(1, "\n", 1);
}