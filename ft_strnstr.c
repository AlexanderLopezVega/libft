/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:59:39 by vboxuser          #+#    #+#             */
/*   Updated: 2025/01/20 15:31:49 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || len == 0)
		return (NULL);
	if (!little || little[0] == '\0')
		return ((char *)big);
	i = 0;
	j = 0;
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[j])
		{
			++j;
			if (little[j] == '\0')
				return ((char *)(big) + i - j + 1);
		}
		else
			j = 0;
		++i;
	}
	return (NULL);
}
