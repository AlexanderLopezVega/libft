/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 09:38:43 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/21 12:34:40 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;
	size_t	strlen;

	size = len;
	strlen = ft_strlen(s);
	if (size > strlen)
		size = strlen;
	if (start > strlen)
		size = 0;
	substr = malloc(sizeof(char) * (size + 1));
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, size);
	substr[size] = '\0';
	return (substr);
}
