/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 23:55:51 by alexander         #+#    #+#             */
/*   Updated: 2025/01/15 12:36:15 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	num_bytes;
	size_t	i;
	void	*ptr;

	num_bytes = nmemb * size;
	if (num_bytes == 0 || nmemb * size != num_bytes)
		return (NULL);
	ptr = malloc(num_bytes);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < num_bytes)
	{
		((char *)(ptr))[i] = '\0';
		++i;
	}
	return (ptr);
}
