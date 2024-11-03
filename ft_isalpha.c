/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-err <zait-err@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:37:27 by zait-err          #+#    #+#             */
/*   Updated: 2024/11/01 15:15:01 by zait-err         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*int	main(void)
{
	char c;
	char v;
	char i;
	char spc;
	int res;
	
	c = 'Z';
	v = '1';
	i = '+';
	spc = ' ';
	res = ft_isalpha(v);
	
	if(res == 1)
	printf("\nResult if this char %c is an alpha %d", v, ft_isalpha(v));
	else
	printf("\nResult if this char %c is not an alpha %d", v, ft_isalpha(v));

	
}*/