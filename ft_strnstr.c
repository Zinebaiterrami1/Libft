/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-err <zait-err@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:36:53 by zait-err          #+#    #+#             */
/*   Updated: 2024/11/03 16:22:37 by zait-err         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*substr)
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (substr[j] == str[i + j] && (i + j) < len && str[i + j])
		{		
			j++;		
		}
		if (substr[j] == '\0')
				return ((char *)str + i);
		i++;
	}
	return (NULL);
}
/*int main() {
	const char *str = "AAAAAAAAAAAAA";
	const char *substr = "FF";
	size_t max = ft_strlen(str);
	char *result = ft_strnstr(str, str, max);
	char *i1 = strnstr(str, str, max);
	if (result) {
		printf("Trouvé à : %s - %s\n", result, i1);
	} else {
		printf("Non trouvé.\n");
	}
	return (0);
}*/