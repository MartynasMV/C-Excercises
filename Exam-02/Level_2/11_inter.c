/* 
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$ */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	inter(char *s1, char *s2)
{
	int	i;
	int	j;
	int	table[256] = {0};
	i = 0;
	j = 0;
	while (s2 && s2[j])
	{
		table[(unsigned char)s2[j]] = 1;
		j++;
	}
	while (s1[i])
	{
		if (table[(unsigned char)s1[i]] == 1)
		{
			table[(unsigned char)s1[i]] = 0;
			ft_putchar(s1[i]);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		inter(av[1], av[2]);
	}
}