#include "libft.h"
#include <string.h>
#include <stdio.h>

int ft_strncmp(char *str1, char *str2, int n)
{
    int i;

    i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && i < n - 1 && str1[i] == str2[i])
    {
        i ++;
    }
    return (str1[i] - str2[i]);
}

int main()
{
    char *str1 = "abc";
    char *str2 = "cba";

    int result, result2;
    
    result = ft_strncmp(str1, str2, 3);
    result2 = strncmp(str1, str2, 3);
    printf("\ntest strncmp %d , test ft_strncmp %d", result2, result);
}