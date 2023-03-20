/* Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src); */

#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str && str[i])
        i++;
    retur(i);
}

char    *ft_strdup(char *src)
{
    char *s2;
    int size;
    int i;

    i = 0;
    size = ft_strlen(src);

    s2 = malloc(sizeof(char) * (size + 1));
    if(!s2)
        return(NULL);
    while (src[i])
    {
        s2[i] = src[i];
        i++;
    }
    s2 = '\0';
    return(s2);
}