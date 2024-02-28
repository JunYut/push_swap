/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:19:57 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/28 12:51:05 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

int	absolute(int num)
{
	if (num < 0)
		return (num * -1);
	return (num);
}

int	count_digits(long num)
{
	int	digits;
	int	sign;

	sign = 1;
	if (num < 0)
		sign = -1;
	digits = sign;
	if (num != 0)
	{
		while (num <= -10 || num >= 10)
		{
			digits += sign;
			num /= 10;
		}
	}
	return (digits);
}

size_t	count_strs(char **strs)
{
	size_t	i;

	i = 0;
	while (strs[i] != 0)
		i++;
	return (i);
}
