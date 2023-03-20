/* 
Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat
	-e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$> */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	n = n % 10 + '0';
	write(1, &n, 1);
}

void	last_word(char *str)
{
	int	idx;

	idx = ft_strlen(str) - 1;
	while (str[idx] == ' ' || str[idx] == '\t')
		idx--;
	while (str[idx] >= '!' && str[idx] <= '~')
		idx--;
	idx++;
	while (str[idx] >= '!' && str[idx] <= '~')
	{
		putchar(str[idx]);
		idx++;
	}
}
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		last_word(av[1]);
	}
	putchar('\n');
}
