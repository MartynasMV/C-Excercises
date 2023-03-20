/* Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str); */
#include <unistd.h>

int	ft_strlen(char *str)
{
    int i = 0;
    while(str && str[i])
        i++;
    return(i);
}