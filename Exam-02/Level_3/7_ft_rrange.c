/* 
Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	*ft_rrange(int start, int end)
{
	int	i;
	int	*array;
	int	len;

	i = 0;
	if (start < end)
	{
		len = end - start + 1;
		array = malloc(sizeof(int) * len);
		while (i < len)
		{
			array[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		len = start - end + 1;
		array = malloc(sizeof(int) * len);
		while (i < len)
		{
			array[i] = start;
			start++;
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
	res = ft_rrange(first, second);
	while (i < size)
	{
		printf("%i, ", res[i]);
		i++;
	}
}
