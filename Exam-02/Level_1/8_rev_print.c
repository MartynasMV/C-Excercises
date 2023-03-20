/* 
Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$ */
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
    int i = 0;
    while(str && str[i])
        i++;
    return(i);
}
void ft_putchar(char c)
{
    write(1,&c,1);
}
int main(int ac, char **av)
{
    int i;
    if (ac == 2)
    {
    i = ft_strlen(av[1]);
    while(i >= 0 )
    {
        ft_putchar(av[1][i]);
        i--;
    }
    }
    write(1, "\n", 1);
}