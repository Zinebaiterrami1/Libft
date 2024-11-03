/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-err <zait-err@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:38:20 by zait-err          #+#    #+#             */
/*   Updated: 2024/11/03 18:03:59 by zait-err         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	int	len;
	int	i;
	char cc = (unsigned char)c;
	char *s = (char *)str;
	len = ft_strlen((char *)str);
	i = len - 1;
	if(cc == '\0')
		return (s + len);
	while (i >= 0)
	{
		if (s[i] == cc)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*int main()
{
	const char s[] = "some,data,in,commas";

	char *comma = strrchr(s, '\0');
	char *comma2 = ft_strrchr(s, '\0');
	printf("%s\n", comma);
	printf("%s\n", comma2);
	char *fail = strrchr(s, '@');
	char *fail2 = ft_strrchr(s, '@');
	// if(fail == NULL || fail2 == NULL)
	//  printf("could not find @!\n");
}*/