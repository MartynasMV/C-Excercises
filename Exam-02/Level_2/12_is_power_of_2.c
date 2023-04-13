#include <stdio.h>
#include <string.h>
#include <unistd.h>

/*     Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2,
	otherwise it returns 0.

Your function must be declared as follows: 

/* int	is_power_of_2(unsigned int n)*/

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