/*
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0. */


#include <stdio.h>
#include <stdlib.h>

int	max(int *tab, unsigned int len)
{
	int	i;
	int	max;

	i = 0;
	if (!tab)
		return (0);
	max = tab[i];
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}

int	main(void)
{
	int array[] = {10, 2 ,3 , 100 , 333};

	printf("Largest Element: %d\n", max(array, 5));
}