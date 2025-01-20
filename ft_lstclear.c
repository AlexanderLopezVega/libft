/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:12:56 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/20 10:08:05 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*prev_node;

	if (!lst)
		return ;
	while (*lst)
	{
		prev_node = *lst;
		*lst = prev_node->next;
		del(prev_node);
		free(prev_node);
	}
	*lst = NULL;
}
