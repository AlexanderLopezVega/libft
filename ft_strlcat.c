/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:09:59 by alexander         #+#    #+#             */
/*   Updated: 2024/12/10 12:28:27 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int dst_len;
	unsigned int src_len;
	unsigned int i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	while (i < size && i < src_len)
	{
		dst[dst_len + i] = src[i];
		++i;
	}
	if (i < size)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
