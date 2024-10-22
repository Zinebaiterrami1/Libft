#include "libft.h"
#include <stdio.h>

int ft_tolower(char c)
{
    if(c >= 'A' && c<= 'Z')
        c = c + 32;
    return c;
}

int main()
{
    char c;
    c = 'Z';
    printf("%c in lowercase is represented as %c", c, ft_tolower(c));
}