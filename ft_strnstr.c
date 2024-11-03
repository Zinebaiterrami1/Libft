/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-err <zait-err@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:36:53 by zait-err          #+#    #+#             */
/*   Updated: 2024/10/30 09:09:38 by zait-err         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*substr)
		return ((char *)str);
	if (len == 0)
		return (NULL);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (substr[j] == str[i + j] && (i + j) < len)
		{
			j++;
		}
		if (substr[j] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

/*int main() {
	const char *str = "Hello, world!";
	const char *substr = "world";

	char *result = strnstr(str, substr, 7);
	if (result) {
		printf("Trouvé à : %s\n", result);
	} else {
		printf("Non trouvé.\n");
	}
	return (0);
}*/