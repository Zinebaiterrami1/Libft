/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-err <zait-err@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:37:57 by zait-err          #+#    #+#             */
/*   Updated: 2024/11/02 11:50:08 by zait-err         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *str, int ch)
{
	if(ch == 0)
		return (0);
	while (*str != '\0')
	{
		if (*str == ch)
			return ((char *)str);
		str++;
	}
	return (NULL);
}

int main()
{

	char* str = "This is MY string!";
	char ch = 'M';

	char* result = strchr(str, ch);
   char* result2 = ft_strchr(str, ch);

	if (result != NULL) {
		// printf("Character '%c' found at position: %ld\n",
		//        ch, result - str);
		// printf("\nCharacter '%c' found at position: %ld\n",
		//        ch, result2 - str);
		printf("the character %c is found : %s found at position: %ld\n", ch,
			result,result - str);
		printf("the character %c is found : %s found at position: %ld\n", ch,
			result2,result2 - str);
	}
	else {
		printf("Character '%c' not found. %s\n", ch, result);
		printf("Character '%c' not found. %s\n", ch, result2);
	}



	return (0);
}