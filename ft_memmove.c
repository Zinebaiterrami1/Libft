/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-err <zait-err@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 08:24:02 by zait-err          #+#    #+#             */
/*   Updated: 2024/10/31 09:52:49 by zait-err         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_mememove(void *dest, const char *src, size_t len)
{
	size_t		i;
	const char	*s;
	char		*d;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	if (d > s)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/*int main()
{
	char d[10] = "";
	char s[] = "hello";
	printf("%s", (char *)ft_mememove(d, s, 2));
}*/