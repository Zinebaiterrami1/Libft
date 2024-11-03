/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-err <zait-err@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:51:00 by zait-err          #+#    #+#             */
/*   Updated: 2024/10/30 08:36:03 by zait-err         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	cc;

	i = 0;
	str = (unsigned char *)s;
	cc = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == cc)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	const char str[] = "Hello, 42!";
	char ch = 'a';
	char *result;

	// Test de la fonction ft_memchr
	result = (char *)ft_memchr(str, ch, sizeof(str));

	if (result != NULL)
		printf("Caractère '%c' trouvé à la position: %ld\n", ch, result - str);
	else
		printf("Caractère '%c' non trouvé\n", ch);

	// Comparaison avec la fonction memchr standard
	result = (char *)memchr(str, ch, sizeof(str));

	if (result != NULL)
		printf("(memchr) Caractère '%c' trouvé à la position: %ld\n", ch, result
			- str);
	else
		printf("(memchr) Caractère '%c' non trouvé\n", ch);

	return (0);
}*/
