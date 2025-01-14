/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:49:35 by vboxuser          #+#    #+#             */
/*   Updated: 2025/01/14 16:52:12 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size) {
	size_t	srclen;
	size_t	cpylen;
	
	if (size == 0)
		return ;
	srclen = ft_strlen(src);
	if (srclen >= size)
		cpylen = size - 1;
	else
		cpylen = srclen;
	ft_memcpy(dst, src, cpylen);
	dst[cpylen] = '\0';
	return (srclen);
}