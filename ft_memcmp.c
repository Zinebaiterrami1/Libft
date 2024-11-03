/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-err <zait-err@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:21:26 by zait-err          #+#    #+#             */
/*   Updated: 2024/11/03 11:59:04 by zait-err         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t				i;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (i < n)
	{	
		if(ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i ++;
	}
	return (0);
}




/*int main(void)
{
	const char str1[] = "Hello, 42!";
	const char str2[] = "Hello, 43!";

	// Test de la fonction ft_memcmp
	int result = ft_memcmp(str1, str2, 0);

	if (result == 0)
		printf("Les blocs sont égaux\n");
	else
		printf("Les blocs sont différents, différence : %d\n", result);

	// Comparaison avec la fonction memcmp standard
	result = memcmp(str1, str2, 0);

	if (result == 0)
		printf("(memcmp) Les blocs sont égaux\n");
	else
		printf("(memcmp) Les blocs sont différents, différence : %d\n", result);

	return (0);
}*/
