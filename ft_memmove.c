/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 00:20:20 by alexander         #+#    #+#             */
/*   Updated: 2025/01/20 10:25:40 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	int		offset;
	int		dir;

	if (!dest || !src || n == 0 || dest == src)
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
		((unsigned char *)(dest))[offset + dir * i]
			= ((unsigned char *)(src))[offset + dir * i];
		++i;
	}
	return (dest);
}
