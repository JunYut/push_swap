/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:46:22 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/18 10:49:27 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validation.h"

int	isnum(const char *str)
{
	while (*str != 0)
	{
		if (*str < '0' || *str > '9')
			return (0);
		++str;
	}
	return (1);
}

int	inrange(const char *num)
{
	if (ft_atoi(num) < INT_MIN || ft_atoi(num) > INT_MAX)
		return (0);
	return (1);
}

int	same_str(const char *s1, const char *s2)
{
	int	i;

	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	i = -1;
	while (s1[++i] != 0)
		if (s1[i] != s2[i])
			return (0);
	return (1);
}
