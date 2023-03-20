/* 
Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject); 

man strcspn says:
Name
strspn, strcspn - search a string for a set of bytes
Synopsis
#include <string.h>
size_t strcspn(const char *s, const char *reject);
Description
The strcspn() function calculates the length of the initial segment of s which consists entirely of bytes not in reject.

Return Value
The strcspn() function returns the number of bytes in the initial segment of s which are not in the string reject.
*/

#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i=0;
    int j = 0;

    while(s[i])
    {
        j=0;
        while(reject[j])
        {
            if(reject[j] == s[i])
                return(i);
            j++;
        }
        i++;
    }
    return(i);
}
int main(void)
{
    char *s = "---0000";
    char *reject = "000";
    size_t result;
    result = ft_strcspn(s, reject);
    printf("%zu", result);
    printf("\n%zu", strcspn(s, reject));
    return(0);
}