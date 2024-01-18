/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:04:29 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/18 09:57:19 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

/**
 * @attention SHOULD BE USED AFTER STRING VALIDATION!!!
 *
 * @param num An integer represented in a string
 * @return long A long integer creatd from the string argument
 */
long	ft_atoi(const char *integer)
{
	long	num;
	int		p_or_n;
	int		i;

	num = 0;
	p_or_n = 1;
	i = -1;
	if (integer[0] == '-')
	{
		p_or_n = -1;
		++i;
	}
	while (integer[++i] != 0)
		num = num * 10 + integer[i] - '0';
	return (num * p_or_n);
}
