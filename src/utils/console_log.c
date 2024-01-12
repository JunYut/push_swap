/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   console_log.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:19:42 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/12 13:50:40 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

/**
 * @brief A simiplified version of printf()
 *
 * @param fmessage a formatted string
 * @param ... only handles integer and string, maybe char too
 */
void	console_log(const char *fmessage, ...)
{
	va_list	args;
	char	*arg_str;
	int		i;

	va_start(args, fmessage);
	i = -1;
	while (fmessage[++i] != 0)
	{
		if (fmessage[i] != '%')
			write(1, fmessage + i, 1);
		else
		{
			arg_str = arg_parser(args, fmessage[i + 1]);
			write(1, arg_str, ft_strlen(arg_str));
			++i;
		}
	}
	write(1, "\n", 1);
	free(arg_str);
	va_end(args);
}

/**
 * @brief A parser that parses int, char* arguments
 *
 * @param args argument list to parse
 * @param fspec format specifier
 * @return char* string generated from parsing arguments
 */
char	*arg_parser(va_list args, const char fspec)
{
	char	*str;
	char	c;

	if (fspec == 's')
		str = va_arg(args, char *);
	if (fspec == 'd')
		str = ft_itoa(va_arg(args, int));
	if (fspec == 'c')
	{
		c = va_arg(args, char);
	}
	if (fspec == '%')
	{
		c = '%';
	}
	else
		return ("");
	write(1, &c, 1);
	str = "";
	return (str);
}
