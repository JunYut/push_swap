/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:46:22 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/18 09:57:46 by tjun-yu          ###   ########.fr       */
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
