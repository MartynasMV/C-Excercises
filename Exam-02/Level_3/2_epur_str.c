/* Assignment name  : epur_str
Expected files   : epur_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays this string with exactly one
space between words, with no spaces or tabs either at the beginning or the end,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

If the number of arguments is not 1, or if there are no words to display, the
program displays \n.

Example:

$> ./epur_str "See? It's easy to print the same thing" | cat -e
See? It's easy to print the same thing$
$> ./epur_str " this        time it      will     be    more complex  . " | cat
	-e
this time it will be more complex .$
$> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./epur_str "" | cat -e
$
$> */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	if (ac == 2)
	{
		while (av[1][j])
			j++;
		while (av[1][j - 1] == ' ' || av[1][j - 1] == '\t')
			j--;
		while (i < j)
		{
			while (av[1][i] == ' ' || av[1][i] == '\t')
				i++;
			while (av[1][i] != ' ' && av[1][i] != '\t')
			{
				ft_putchar(av[1][i]);
				i++;
			}
			if (i != j)
            {
                ft_putchar(' ');
            }
		}
	}
	ft_putchar('\n');
}