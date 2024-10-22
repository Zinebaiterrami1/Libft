#include "libft.h"
#include <stdio.h>

int ft_toupper(char c)
{
    if(c >= 'a' && c <= 'z')
        c = c - 32;
    return c;
}

int main()
{
    char c;
    c = 'z';
    printf("%c in uppercase is represented as %c", c, ft_toupper(c));
}