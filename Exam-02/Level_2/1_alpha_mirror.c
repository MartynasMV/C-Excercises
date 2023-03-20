/*
Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$> */
#include <unistd.h>

void	putnb(int num)
{
	if (num > 9)
		putnb(num / 10);
	num = num % 10 + '0';
	write(1, &num, 1);
}
void	putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
    int i = 0;
	if (ac == 2)
	{
        while(av[1][i])
        {
            if(av[1][i] >= 'a' && av[1][i] <= 'z')
                av[1][i] = 122 - av[1][i] + 97;
            else  if(av[1][i] >= 'a' && av[1][i] <= 'z')
                av[1][i] = 90 - av[1][i] + 65;
            putchar(av[1][i]);
            i++;
        }
	}
	putchar('\n');
}