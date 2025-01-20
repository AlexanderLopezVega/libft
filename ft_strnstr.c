/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:59:39 by vboxuser          #+#    #+#             */
/*   Updated: 2025/01/20 10:05:33 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	s2_len;
	char	*substr;

	i = 0;
	j = 0;
	s2_len = ft_strlen(s2);
	substr = NULL;
	while (s1[i] != '\0' && i < n && j < s2_len)
	{
		if (s1[i] == s2[j])
		{
			if (j == 0)
				substr = (char *)&(s1[i]);
			++j;
		}
		else
		{
			substr = NULL;
			j = 0;
		}
	}
	return (substr);
}
