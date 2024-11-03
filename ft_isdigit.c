/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-err <zait-err@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:37:46 by zait-err          #+#    #+#             */
/*   Updated: 2024/10/30 08:20:23 by zait-err         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*int	main(void)
{
	char c;
	char digit;

	c = 'Z';
	digit = '5';
	printf("\nIs %c a digit ? %d", c, isdigit(c));
	printf("\nIs %c a digit ? %d", c, ft_isdigit(c));
}*/