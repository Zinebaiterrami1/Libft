/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-err <zait-err@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:37:21 by zait-err          #+#    #+#             */
/*   Updated: 2024/10/30 08:19:11 by zait-err         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}

/*int	main(void)
{
	char c;
	char t;
	char a;

	c = 'c';
	t = '*';
	a = '5';

	printf("\ntest %c alphanumeric %d", a, ft_isalnum(a));
}*/