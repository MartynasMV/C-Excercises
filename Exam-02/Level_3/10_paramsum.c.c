/* 
Assignment name  : paramsum
Expected files   : paramsum.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the number of arguments passed to it, followed by
a newline.

If there are no arguments, just display a 0 followed by a newline.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$> */

#include<unistd.h>

void ft_putnumbr(int n)
{
    char c;
    if(n>9)
        ft_putnumbr(n/10);
    c= n % 10 +'0';
    write(1, &c, 1);
}


int main(int ac, char **av)
{

    int x = ac - 1;
    ft_putnumbr(x);
    write(1, "\n",1);
}