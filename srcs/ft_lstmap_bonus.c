/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwywijas <uwywijas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:28:33 by uwywijas          #+#    #+#             */
/*   Updated: 2023/11/28 20:21:43 by uwywijas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*holder;
	void	*content;

	result = NULL;
	while (lst)
	{
		content = (*f)(lst->content);
		holder = ft_lstnew(content);
		if (holder == NULL)
			return (ft_lstclear(&result, del), del(content), NULL);
		ft_lstadd_back(&result, holder);
		lst = lst->next;
	}
	return (result);
}
