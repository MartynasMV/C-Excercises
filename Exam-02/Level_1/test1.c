#include <stdio.h>
#include <unistd.h>

int	*ft_rrange(int start, int end)
{
	int i = 0;
	int len = 0;
	int *arr;

	if (start < end)
	{
		len = end - start + 1;
		arr = malloc(sizeof(int) * len);
		while (i <= len)
		{
			arr[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		len = start - end + 1;
		arr = malloc(sizeof(int) * len);
		while (i <= len)
		{
			arr[i] = end;
			end++;
			i++;
		}
	}
	return (arr);
}