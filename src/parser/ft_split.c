/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:15:26 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/31 14:17:23 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

char	**ft_split(const char *str, char c)
{
	char	**words;
	size_t	count;
	int		i;

	words = (char **)c_malloc(sizeof(char *), "ft_split");
	count = 0;
	i = -1;
	while (str[++i] != 0)
	{
		if (str[i] == c)

	}

	return (words);
}
