/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-err <zait-err@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:37:51 by zait-err          #+#    #+#             */
/*   Updated: 2024/10/30 08:24:43 by zait-err         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	char c;

	c = 'Q';
	printf("Result when a printable character %c is passed to isprint(): %d", c,
		isprint(c));

	c = '\t';
	printf("\nResult when a control character %c is passed to isprint(): %d", c,
		isprint(c));

	return (0);
}*/