/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-err <zait-err@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:21:26 by zait-err          #+#    #+#             */
/*   Updated: 2024/10/30 08:36:14 by zait-err         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	i = 0;
	str1 = ptr1;
	str2 = ptr2;
	while (i < n - 1 && str1[i] == str2[i])
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

/*int main(void)
{
	const char str1[] = "Hello, 42!";
	const char str2[] = "Hello, 43!";

	// Test de la fonction ft_memcmp
	int result = ft_memcmp(str1, str2, 10);

	if (result == 0)
		printf("Les blocs sont égaux\n");
	else
		printf("Les blocs sont différents, différence : %d\n", result);

	// Comparaison avec la fonction memcmp standard
	result = memcmp(str1, str2, 10);

	if (result == 0)
		printf("(memcmp) Les blocs sont égaux\n");
	else
		printf("(memcmp) Les blocs sont différents, différence : %d\n", result);

	return (0);
}*/
