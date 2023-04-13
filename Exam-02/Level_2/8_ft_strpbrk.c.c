/* 
Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2); 

DESCRIPTION
    The strpbrk() function locates the first occurrence in the string
    s of any of the bytes in the string accept.
RETURN VALUE
    The strpbrk() function returns a pointer to the byte in s that
    matches one of the bytes in accept, or NULL if no such byte is
    found.


*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strpbrk(const char *s, const char *accept)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				return ((char *)&s[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", strpbrk(argv[1], argv[2]));
	printf("%s\n", ft_strpbrk(argv[1], argv[2]));
}