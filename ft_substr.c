/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 09:38:43 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/20 15:29:31 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	str_len;
	size_t	cpy_len;

	if (!s)
		return (NULL);
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	str_len = ft_strlen(s);
	cpy_len = len;
	if (cpy_len > str_len - start)
		cpy_len = str_len - start;
	ft_memcpy(substr, s + start, cpy_len);
	substr[len] = '\0';
	return (substr);
}
