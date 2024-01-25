/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:55:50 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/25 14:19:29 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

/**
 * @brief This function creates a string base on num
 *
 * @param num An integer ranging from INT_MIN to INT_MAX
 * @return char* A string that resembles num
 * @warning NEGATIVE INTENGER IS NOT HANDLED
 */
char	*ft_itoa(int num)
{
	char	*str;
	size_t	chars;
	long	temp;

	if (num == 0)
		return (ft_strdup("0"));
	temp = (long)num;
	chars = 0;
	if (temp < 0)
	{
		chars += 1;
		temp *= -1;
	}
	chars += count_digits(temp);
	str = (char *)c_malloc(chars + 1, "ft_itoa");
	str[chars] = 0;
	if (num < 0)
		str[0] = '-';
	while (temp > 0)
	{
		str[--chars] = (temp % 10) + '0';
		temp /= 10;
	}
	return (str);
}
