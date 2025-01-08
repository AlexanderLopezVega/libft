/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 00:20:20 by alexander         #+#    #+#             */
/*   Updated: 2024/12/09 14:31:53 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	int		offset;
	int		dir;

	if (dest == src)
		return (dest);
	i = 0;
	offset = 0;
	dir = 1;
	if (dest > src)
	{
		offset = n - 1;
		dir = -1;
	}
	while (i < n)
	{
		((unsigned char *)(dest))[offset + dir]
			= ((unsigned char *)(src))[offset + dir];
		++i;
	}
	return (dest);
}
