#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int ft_isalnum(int c)
{
    if(((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) || (c >= 48 && c <= 57))
        return 1;
    return 0;
}

int main()
{
    char c;
    char t;
    char a;

    c = 'c';
    t = '*';
    a = '5';

    printf("\ntest %c alphanumeric %d", a, ft_isalnum(a));
}