/* Assignment name  : print_bits
Expected files   : print_bits.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010" */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	print_bits(unsigned char octet)
{
	unsigned int	bit;
	int				i;

	i = 8;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		ft_putchar(bit);
	}
}

int	main(void)
{
	print_bits(7);
}