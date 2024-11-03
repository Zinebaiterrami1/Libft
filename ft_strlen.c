/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-err <zait-err@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:38:10 by zait-err          #+#    #+#             */
/*   Updated: 2024/10/30 09:07:07 by zait-err         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int main()
{
	char a[20]="Program";
	char b[20]={'P','r','o','g','r','a','m','\0'};
	int v1 = ft_strlen(a);
	int v2 = ft_strlen(b);

	printf("Length of string v1 = %d \n",v1);
	printf("Length of string v2 = %d \n",v2);

	return (0);
}*/