#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 2;
		int num = atoi(av[1]);

		if (num == 1)
			return (1);
		while (num > 1)
		{
			if (num % i == 0)
			{
				printf("%i", i);
				num = num / i;
				if (num > 1)
					printf("*");
			}
			else
				i++;
		}
	}
    printf("\n");
}