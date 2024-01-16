/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:55:50 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/16 14:46:13 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

static size_t	count_digits(long num);

/**
 * @brief This function creates a string base on num
 *
 * @param num An integer ranging from INT_MIN to INT_MAX
 * @return char* A string that resembles num
 */
char	*ft_itoa(int num)
{
	char	*str;
	size_t	chars;
	long	temp;

	if (num == 0)
		return (ft_strdup("0"));
	temp = num;
	chars = count_digits(temp);
	str = (char *)c_malloc(chars + 1, "ft_itoa");
	str[chars] = 0;
	if (temp < 0)
	{
		str[0] = '-';
		temp *= -1;
	}
	while (temp > 0)
	{
		str[--chars] = temp % 10 + '0';
		temp /= 10;
	}
	return (str);
}

/**
 * @brief This function the digit count of a number without the negative sign
 *
 * @param num A long
 * @return size_t Digit count
 */
static size_t	count_digits(long num)
{
	size_t	digits;

	if (num == 0)
		return (1);
	digits = 0;
	if (num < 0)
	{
		++digits;
		num *= -1;
	}
	while (num > 0)
	{
		num /= 10;
		++digits;
	}
	return (digits);
}

// int main()
// {
// 	char* str;

// 	printf("%d: %s\n\n", INT_MIN, ft_itoa(INT_MIN));
// 	printf("%d: %s\n\n", INT_MAX, ft_itoa(INT_MAX));
// 	printf("%d: %s\n\n", 0, ft_itoa(0));
// 	printf("%d: %s\n\n", -999, ft_itoa(-999));
// }
