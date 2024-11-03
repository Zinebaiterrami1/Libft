/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-err <zait-err@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 08:32:43 by zait-err          #+#    #+#             */
/*   Updated: 2024/10/31 09:54:07 by zait-err         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_lst;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	tmp = lst;
	while (tmp)
	{
		new = ft_lstnew(f(tmp->content));
		if (!new)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new);
		tmp = tmp->next;
	}
	return (new_lst);
}
