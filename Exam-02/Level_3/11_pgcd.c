/* Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
$ */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	pgcd(int a, int b)
{
	int	del;

	del = a;
	if (a > b)
		del = b;
	while (del > 0)
	{
		if (a % del == 0 && b % del == 0)
			break ;
		del--;
	}
	printf("%i", del);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int x = atoi(av[1]);
		int y = atoi(av[2]);
		pgcd(x, y);
	}
	ft_putchar('\n');
}