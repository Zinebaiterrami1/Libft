#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int ft_isprint(int c)
{
    if(c >= 32 && c <= 126)
        return 1;
    return 0;
}

int main()
{
    char c;

    c = 'Q';
    printf("Result when a printable character %c is passed to isprint(): %d", c, isprint(c));

    c = '\t';
    printf("\nResult when a control character %c is passed to isprint(): %d", c, isprint(c));

    return 0;
}