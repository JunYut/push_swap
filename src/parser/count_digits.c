/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_digits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:19:57 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/23 11:26:41 by tjun-yu          ###   ########.fr       */
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
