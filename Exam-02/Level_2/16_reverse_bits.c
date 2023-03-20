/* 
Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0010  0110
	 ||
	 \/
 0110  0100 */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;

	while(i--)
	{
		bit = (octet >> i & 1) + '0';
		ft_putchar(bit);
	}
}
unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	a;

	i = 0;
	a = 0;
	while (i < 8)
	{
		if ((octet >> i & 1))
			a += 1 << (7 - i);
		i++;
	}
	return (a);
}

int	main(void)
{
	unsigned char bit;
	print_bits(5);
	ft_putchar('\n');
	bit = x_reverse_bits(5);
	print_bits(bit);
	ft_putchar('\n');
}