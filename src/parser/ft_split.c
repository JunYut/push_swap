/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:15:26 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/01 12:03:33 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

static size_t	word_count(const char *str, char c);
static size_t	word_len(const char *str, char c);

char	**ft_split(const char *str, char c)
{
	char	**words;
	size_t	word_size;
	int		i;
	int		j;
	int		k;

	i = word_count(str, c) + 1;
	words = (char **)c_malloc(i * sizeof(char *), "ft_split");
	i = -1;
	j = -1;
	while (str[++i] != 0)
	{
		k = -1;
		if (str[i] != c && str[i] != 0)
		{
			word_size = word_len(str + i, ' ');
			words[++j] = (char *)c_malloc(word_size + 1, "ft_split");
			while (str[i] != c && str[i] != 0)
				words[j][++k] = str[i++];
			words[j][k + 1] = 0;
			--i;
		}
	}
	words[word_count(str, c)] = NULL;
	return (words);
}

static size_t	word_count(const char *str, char c)
{
	size_t	count;
	int		i;

	count = 0;
	i = -1;
	while (str[++i] != 0)
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == 0))
			count++;
	return (count);
}

static size_t	word_len(const char *str, char c)
{
	size_t	len;

	len = 0;
	while (str[len] != c && str[len] != 0)
		len++;
	return (len);
}
