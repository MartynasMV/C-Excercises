/*
Assignment name  : swap_bits
Expected files   : swap_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, swaps its halves (like the example) and
returns the result.

Your function must be declared as follows:

unsigned char	swap_bits(unsigned char octet);

Example:

  1 byte
_____________
 0100 | 0001
     \ /
     / \
 0001 | 0100 */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	i = 8;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		ft_putchar(bit);
	}
}

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	new_left;
	unsigned char	new_right;

	new_right = octet >> 4;
	new_left = octet << 4;
	return (new_left + new_right);
}

int	main(void)
{
	unsigned char bit;
	print_bits(5);
	write(1, "\n", 1);
	bit = swap_bits(5);
	print_bits(bit);
}