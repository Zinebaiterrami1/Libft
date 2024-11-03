/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-err <zait-err@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:04:08 by zait-err          #+#    #+#             */
/*   Updated: 2024/11/03 20:51:10 by zait-err         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	
	if (!s)
        return (NULL);	
	i = 0;
	if(start > len)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
        len = ft_strlen(s + start);
	if(start >= ft_strlen(s))
	{
		substr = ft_calloc(1, sizeof(char));
		return(substr);
	}
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}

/*int main()
{
	char *str = "Zineber";
	printf("String: %s ", str);
	printf("\nsubstring is: ");
	char *result = ft_substr(str, 10, 3);
	printf("%s", result);
}*/