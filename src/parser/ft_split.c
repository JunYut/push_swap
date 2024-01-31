/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:15:26 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/31 11:28:57 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

char	**ft_split(const char *str, char c)
{
	char	**strs;
	size_t	count;
	int		flag;
	int		i;

	strs = (char **)c_malloc(sizeof(char *), "ft_split");
	i = -1;
	while (str[++i] != 0)
	{
		if (str[i] == c)
			
	}

	return (strs);
}
