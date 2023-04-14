/* Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, unsigned int str_base); */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(const char *nbr, unsigned int base)
{
	int	i;
	int	result;
	int	number;
	int	sign;

	i = 0; 
	result = 0;
	sign = 1;

	if(nbr[i] == '-')
	{
		sign = -1;
		i++;
	}

	while(nbr[i])
	{
		if(nbr[i] >= '0' && nbr[i] <= '9')
			number = nbr[i] - '0';
		else if(nbr[i] >= 'A' && nbr[i] <= 'F')
			number= nbr[i] - '7';
		else if(nbr[i] >= 'a' && nbr[i] <= 'f')
			number= nbr[i] - 'W';
		else
			break;
		if(number >= base)
			break;

		result *= base;
		result += number;
		i++;
	}
	return(result * sign);
}

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_atoi_base(argv[1], atoi(argv[2])));
}