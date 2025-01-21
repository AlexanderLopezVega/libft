/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:45:52 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/21 12:07:27 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_words(const char *s, const char c)
{
	size_t	word_count;
	size_t	i;
	char	in_word;

	if (!s || s[0] == '\0')
		return (0);
	word_count = 0;
	i = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (!in_word)
			{
				in_word = 1;
				++word_count;
			}
		}
		else
			in_word = 0;
		++i;
	}
	return (word_count);
}

static size_t	get_word(const char *s, const char c, char **split,
		size_t offset)
{
	size_t	len;

	len = 0;
	while (s[offset + len] != '\0' && s[offset + len] != c)
		++len;
	*split = ft_substr(s, offset, len);
	return (len);
}

static size_t	fill_split(const char *s, const char c, char **split)
{
	size_t	offset;
	size_t	word_count;
	size_t	word_len;

	offset = 0;
	word_count = 0;
	while (s[offset] != '\0')
	{
		if (s[offset] == c)
		{
			++offset;
			continue ;
		}
		word_len = get_word(s, c, &split[word_count], offset);
		if (!split[word_count])
			return (word_count);
		++word_count;
		offset += word_len;
	}
	return (word_count);
}

static void	free_split(char ***split, const size_t len)
{
	size_t	i;

	if (!split || !*split)
		return ;
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

char	**ft_split(char const *s, char c)
{
	size_t	len;
	char	**split;

	if (!s)
		return (NULL);
	len = count_words(s, c);
	split = malloc(sizeof(char *) * (len + 1));
	if (!split)
		return (NULL);
	if (fill_split(s, c, split) != len)
		free_split(&split, len);
	return (split);
}

// int	main(void)
// {
// 	char **split;

// 	split = ft_split("", 'z');
// 	return (0);
// }