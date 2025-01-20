/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:20:23 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/20 10:08:21 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	try_add_node(t_list **map_lst, t_list *curr,
		void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;

	new_node = ft_lstnew(f(curr->content));
	if (!new_node)
		ft_lstclear(map_lst, del);
	else
		ft_lstadd_back(map_lst, new_node);
	return (new_node != NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map_lst;

	if (!lst || !f || !del)
		return (NULL);
	if (!try_add_node(&map_lst, lst, f, del))
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		if (!try_add_node(&map_lst, lst, f, del))
			return (NULL);
		lst = lst->next;
	}
	return (map_lst);
}
