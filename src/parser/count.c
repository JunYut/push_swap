/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:19:57 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/31 15:18:29 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

size_t	count_digits(long num)
{
	size_t	digits;

	digits = 1;
	if (num != 0)
	{
		if (num < 0)
			num *= -1;
		while (num >= 10)
		{
			digits += 1;
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
