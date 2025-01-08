/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 00:35:48 by alexander         #+#    #+#             */
/*   Updated: 2024/12/04 00:38:53 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*str;

	len = ft_strlen(s);
	str = malloc(sizeof(char) * len);
	if (str == 0)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		++i;
	}
	return (str);
}
