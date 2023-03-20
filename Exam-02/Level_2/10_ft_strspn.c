/* 
Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);

Description
The strspn() function calculates the length (in bytes) of the initial segment of s which consists entirely of bytes in accept.

Return Value
The strspn() function returns the number of bytes in the initial segment of s which consist only of bytes from accept. */


#include <stdio.h>
#include <string.h>
#include <unistd.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	x = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				x++;
				break ;
			}
			j++;
		}
		i++;
	}
	return (x);
}

int main(int ac, char **av )
{
    if(ac==3)
    {
        printf("%zu\n",strspn(av[1], av[2]) );
        printf("%zu\n",ft_strspn(av[1], av[2]));
    }
}