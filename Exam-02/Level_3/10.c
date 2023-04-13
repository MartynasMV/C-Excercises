#include <stdio.h>
#include <unistd.h>

void putnumber(int n)
{
    char c;
    if(n>9)
        putnumber(n/10);
    c=n%10 + '0';
    write(1,&c,1);
    
}


int main (int ac, char **av)
{
    (void)av;
    int x = ac -1;
    putnumber(x);
    write(1,"\n", 1);
}






$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81

i =1
number = atoi of (av[1])
i<=number

putnum(i)
write (1, " x ", 3)
putnum(number)
write(1, " = ", 3)
putnum(number * i)
