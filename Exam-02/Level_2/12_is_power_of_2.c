#include <stdio.h>
#include <string.h>
#include <unistd.h>

/*     Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2,
	otherwise it returns 0.

Your function must be declared as follows: */

//first variant
/* int	is_power_of_2(unsigned int n)
{
	unsigned long int	idx;
	int					idx;

	if (n == 0)
		return (0);
	while (n > 1)
	{
		if (n % 2 != 0)//this means not dividable by 2
			return (0);
		n = n / 2;
	}
	return (0);
} */
/* int	is_power_of_2(unsigned int n)
{
	idx = 1;
	while (idx <= n)
	{
		if (idx == n)
			return (1);
		idx *= 2;
	}
	return (0);
} */
int	is_power_of_2(unsigned int n)
{
	int idx = 1;
	while (idx <= n)
	{
		if (idx == n)
		{
			return (1);
		}
		idx *= 2;
	}
	return (0);
}

int	main(void)
{
	int n = 4;

	printf("%i", is_power_of_2(n));
}