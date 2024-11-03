/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-err <zait-err@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 08:42:46 by zait-err          #+#    #+#             */
/*   Updated: 2024/10/30 09:10:46 by zait-err         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*new_str;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	new_str = (char *)malloc((end - start + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, (char *)s1 + start, end - start);
	new_str[end - start] = '\0';
	return (new_str);
}

/*int main()
{
	char *s = "hhhzinebjjjj";
	char *s1 = "bbaaabbbnoussayba baaabbaaabbb";
	char *set1 = "b";
	char *set = "hj";
	printf("%s", ft_strtrim(s, set));
	printf("\n%s", ft_strtrim(s1, set1));
}*/