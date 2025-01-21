/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 17:02:21 by vboxuser          #+#    #+#             */
/*   Updated: 2025/01/21 12:57:21 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*iter;
	char	*last_char;
	char	found_char;

	iter = (char *)s;
	found_char = 0;
	while (*iter != '\0')
	{
		if (*((unsigned char *)iter) == c)
		{
			found_char = 1;
			last_char = iter;
		}
		++iter;
	}
	if (c == '\0')
		return (iter);
	if (found_char)
		return (last_char);
	return (NULL);
}
