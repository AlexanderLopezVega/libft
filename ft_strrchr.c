/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 17:02:21 by vboxuser          #+#    #+#             */
/*   Updated: 2025/01/14 17:28:11 by vboxuser         ###   ########.fr       */
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