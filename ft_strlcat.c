/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-err <zait-err@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:38:02 by zait-err          #+#    #+#             */
/*   Updated: 2024/11/02 12:08:08 by zait-err         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest,const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size <= len_dest)
		return (size + len_src);
	while (i < (size - len_dest - 1) && src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}

/*int	main(void) {
	char dest[20] = "Hello, ";
	char dest2[20] = "Hello, ";
	char src[] = "world!";
	unsigned int result = ft_strlcat(dest, src, 10);
	int result2 = strlcat(dest2, src, 10);
	printf("Resulting string: %s\n", dest);
	printf("Total length: %u\n", result);
	printf("Resulting string 2: %s\n", dest2);
	printf("Total lengt: %d\n", result2);
	return (0);
}*/