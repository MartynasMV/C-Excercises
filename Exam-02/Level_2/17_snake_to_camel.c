/* 
Assignment name  : snake_to_camel
Expected files   : snake_to_camel.c
Allowed functions: malloc, free, realloc, write
--------------------------------------------------------------------------------

Write a program that takes a single string in snake_case format
and converts it into a string in lowerCamelCase format.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

Examples:
$>./snake_to_camel "here_is_a_snake_case_word"
hereIsASnakeCaseWord
$>./snake_to_camel "hello_world" | cat -e
helloWorld$
$>./snake_to_camel | cat -e
$ */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

/* int ft_strlen(char *str)
{   
    int i= 0;
    while(str && str[i])
        i++;
    return(i);
} */
int main(int ac, char **av)
{
    //int len;
    int i = 0;
    //len = ft_strlen(av[1]);
    if(ac==2)
    {
        while(av[1][i])
        {
            if(av[1][i] == '_')
            {
                av[1][i+1] -= 32;
                i++;
            }
            ft_putchar(av[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
}