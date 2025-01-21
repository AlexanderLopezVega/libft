/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:45:52 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/21 13:07:24 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	get_split_len(const char *s, const char c)
{
	size_t	len;
	char	*iter;
	char	last_char;

	if (*s == '\0')
		return (0);
	iter = (char *)s;
	while (*s != '\0')
	{
		
	}
}

static void	free_split(char **split, const size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if ((*split)[i])
		{
			free((*split)[i]);
			(*split)[i] = NULL;
		}
		++i;
	}
	free(*split);
	*split = NULL;
}

static void	fill_words(const char *s, const char c, char **split,
		const size_t len)
{

}

char	**ft_split(char const *s, char c)
{
	size_t len;
	char **split;

	len = get_split_len(s, c);
	split = malloc(sizeof(char *) * (len + 1));
	if (!split)
		return (NULL);
	fill_words(s, c, &split, len);
	return (split);
}