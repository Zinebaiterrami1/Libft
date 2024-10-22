#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return 1;
    return 0;
}

int main()
{
    char c;
    char digit;

    c  = 'Z';
    digit = '5';
    printf("\nIs %c a digit ? %d", c, isdigit(c));
    printf("\nIs %c a digit ? %d", c, ft_isdigit(c));
}