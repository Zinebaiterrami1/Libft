#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int ft_isalpha(int c)
{
    if((c >= 65 && c >= 90) || (c >= 97 && c <= 122))
        return 1;
    return 0;
}

int main()
{
    char c;
    char v;
    char i;
    char spc;

    c = 'Z';
    v = '1';
    i = '+';
    spc = ' ';

    printf("\nResult if this char %c is an alpha %d", spc, ft_isalpha(spc));
}