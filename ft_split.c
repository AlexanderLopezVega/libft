/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-v <alopez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:45:52 by alopez-v          #+#    #+#             */
/*   Updated: 2025/01/20 10:20:30 by alopez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static unsigned int	count_words(const char *s, const char c)
{
	unsigned int	i;
	unsigned int	num_words;

	i = 0;
	num_words = 0;
	while (s[i] != '\0')
	{
		if (i > 0 && s[i] == c && s[i - 1] != c)
			++num_words;
		++i;
	}
	if (s[i - 1] != c)
		++num_words;
	return (num_words);
}

static unsigned int	fill_words(const char *s, const char c, char **split)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	num_words;

	i = 0;
	j = 0;
	num_words = 0;
	while (s[j] != '\0')
	{
		if (s[j] == c)
		{
			if (j > i)
			{
				split[num_words] = ft_substr(s, i, j - i);
				if (!split[num_words])
					return (num_words);
			}
			i = j;
		}
		++j;
	}
	if (s[j - 1] != c && j > i)
		split[num_words++] = ft_substr(s, i, j - i);
	return (num_words);
}

static void	free_words(char **split, unsigned int num_words)
{
	while (num_words > 0)
	{
		free(split[num_words - 1]);
		--num_words;
	}
}

char	**ft_split(char const *s, char c)
{
	unsigned int	word_count;
	unsigned int	num_words;
	char			**split;

	word_count = count_words(s, c);
	split = malloc(sizeof(char *) * (word_count + 1));
	if (!split)
		return (NULL);
	num_words = fill_words(s, c, split);
	if (num_words < word_count)
	{
		free_words(split, num_words);
		free(split);
		return (NULL);
	}
	split[word_count] = NULL;
	return (split);
}
