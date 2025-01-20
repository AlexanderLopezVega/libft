/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 17:02:21 by vboxuser          #+#    #+#             */
/*   Updated: 2025/01/20 10:05:38 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_c;
	char	*iter;

	last_c = NULL;
	iter = (char *)s;
	while (*iter != '\0')
	{
		if (*iter == c)
			last_c = (char *)iter;
		++iter;
	}
	return (last_c);
}
