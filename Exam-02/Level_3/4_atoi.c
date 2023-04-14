#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(const char *nbr, unsigned int str_base)
{
    int i = 0;
    int result = 0;
    int sign = 1;
    int number =0;

    if (nbr[i] == '-')
    {
        sign = -1;
        i++;
    }

    while(nbr)
    {
        if(nbr[i]>='0' && nbr[i] <= '9')
            number = nbr[i] -  '0';
        else if(nbr[i] >= 'a' && nbr[i <= 'z'])
            number =nbr[i] - 'W';
        else if(nbr[i] >= 'A' && nbr[i] <= 'Z')
            number = nbr[i] - '7';
        else
            break;
        if(number>=str_base)
            break;
        result *= str_base;
        result += number;
        i++;
    }
    return(result*sign);
}


int main(int ac, char **av)
{
    (void)ac;
    printf("%i", ft_atoi_base(av[1], 16));
}