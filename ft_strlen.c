#include "libft.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i ++;
    }
    return i;
}

#include <stdio.h>
#include <string.h>
int main()
{
    char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};
    int v1 = ft_strlen(a);
    int v2 = ft_strlen(b);

    printf("Length of string v1 = %d \n",v1);
    printf("Length of string v2 = %d \n",v2);

    return 0;
}