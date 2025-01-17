/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 09:30:09 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/17 09:38:40 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	contains_char(const char *str, const char c)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		++i;
	return (str[i] == c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) + 1;
	if (end - 1 == start)
		return (s1);
	while (set[start] != '\0' && contains_char(set, s1[start]))
		++start;
	while (end > start && contains_char(set, s1[end - 1]))
		--end;
	return (ft_substr(s1, start, end - start));
}