/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-err <zait-err@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:38:30 by zait-err          #+#    #+#             */
/*   Updated: 2024/10/30 13:22:30 by zait-err         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*int main()
{
	char c;
	c = 'z';
	printf("%c in uppercase is represented as %c", c, ft_toupper(c));
}*/