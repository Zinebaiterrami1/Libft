/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-err <zait-err@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:56:25 by zait-err          #+#    #+#             */
/*   Updated: 2024/10/30 08:17:38 by zait-err         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int	main(void)
{
	char	buffer[10];

	// Use bzero to set the memory of buffer to 0
	bzero(buffer, sizeof(buffer));
	// Print the contents of buffer
	printf("Buffer contents after bzero: ");
	for (int i = 0; i < sizeof(buffer); i++)
	{
		printf("%d ", buffer[i]); // Should print 0 for all elements
	}
	printf("\n");
	return (0);
}*/
