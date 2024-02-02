/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: v <v@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:04:29 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/02 14:40:46 by v                ###   ########.fr       */
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
	if (integer[0] == '+' || integer[0] == '-')
		++i;
	if (integer[0] == '-')
		p_or_n = -1;
	while (integer[++i] != 0)
		num = num * 10 + integer[i] - '0';
	return (num * p_or_n);
}
