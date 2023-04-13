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

int modified_ft_strchr(const char *s, int c )
{
	int i = 0;
	while (s[i])
	{
		if(c == s[i])
			return 1;
			//original would return((char*)&s[i]);
		i++;
	}
	return(0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;

	while (s[i])
	{
		if(modified_ft_strchr(accept, s[i]) == 0)
			break;
		i++;
	}
	return(i);
}

int main(int ac, char **av )
{
    if(ac==3)
    {
        printf("%zu\n",strspn(av[1], av[2]) );
        printf("%zu\n",ft_strspn(av[1], av[2]));
    }
}