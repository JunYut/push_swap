/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:47:02 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/16 11:56:44 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*ft_strdup(const char *src)
{
	char	*new;
	int		i;

	new = (char *)c_malloc(ft_strlen(src) + 1, "ft_strdup");
	i = -1;
	while (src[++i] != 0)
		new[i] = src[i];
	new[i] = 0;
	return (new);
}

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != 0)
		++len;
	return (len);
}
