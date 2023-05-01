/*
Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int	*ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	*ft_range(int start, int end)
{
	int	*array;
	int	i;
	int	len;

	i = 0;
	if (start < end)
	{
		len = end - start +1 ;
		array = malloc(sizeof(int) * len);
		while (i < len)
		{
			array[i] = start;
			i++;
			start++;
		}
	}
	else
	{
		len = start - end +1;
		array = malloc(sizeof(int) * len);
		i = 0;
		while (i < len)
		{
			array[i] = start;
			start--;
			i++;
		}
	}
	return (array);
}

int	main(void)
{
	int	*res;
	int	i;
	int	first;
	int	second;
	int	size;

	first = 1;
	second = 5;
	if (second > first)
		size = (second - first) + 1;
	else
		size = (first - second) + 1;
	i = 0;
	res = ft_range(first, second);
	while (i < size)
	{
		printf("%i, ", res[i]);
		i++;
	}
}
