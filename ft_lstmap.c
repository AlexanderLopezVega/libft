/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:20:23 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/21 16:52:56 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*result_lst;
// 	t_list	*elem;

// 	if (!lst || !f || !del)
// 		return (NULL);
// 	result_lst = NULL;
// 	while (lst)
// 	{
// 		elem = ft_lstnew(f(lst->content));
// 		if (!elem)
// 		{
// 			ft_lstclear(&result_lst, del);
// 			return (NULL);
// 		}
// 		ft_lstadd_back(&result_lst, elem);
// 		lst = lst->next;
// 	}
// 	return (result_lst);
// }


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*lst2_sub;

	if (!lst || !f || !del)
		return (NULL);
	lst2 = NULL;
	while (lst)
	{
		lst2_sub = ft_lstnew(f(lst->content));
		if (!lst2_sub)
		{
			ft_lstclear(&lst2, del);
			return (NULL);
		}
		ft_lstadd_back(&lst2, lst2_sub);
		lst = lst->next;
	}
	return (lst2);
}