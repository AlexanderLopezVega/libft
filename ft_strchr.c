/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 00:34:19 by alexander         #+#    #+#             */
/*   Updated: 2024/12/04 00:53:04 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)(s + i));
		++i;
	}
	return (NULL);
}
