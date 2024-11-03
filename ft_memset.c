/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-err <zait-err@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:03:07 by zait-err          #+#    #+#             */
/*   Updated: 2024/11/02 15:34:50 by zait-err         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	value;

	i = 0;	
	str = (unsigned char *)ptr;
	value = (unsigned char)c;
	if (n <= 0 || (!str))
		return (ptr);
	while (i < n)
	{
		str[i] = value;
		i++;
	}
	return (ptr);
}

/*int main()
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	char ptr[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore memset(): %s\n", str);
	printf("\nBefore ft memset(): %s\n", ptr);

	// Fill 8 characters starting from str[13] with '.'
	memset(str, '.', 8*sizeof(char));
	ft_memset(ptr, '.', 8*sizeof(char));

	printf("\nAfter memset():  %s\n", str);
	printf("\nAfter ft memset():  %s\n", ptr);
	return (0);
}*/