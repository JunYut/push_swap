/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   console_log.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:19:42 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/31 14:26:48 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static char	*arg_parser(va_list args, const char fspec);

/**
 * @brief A simiplified version of printf()
 *
 * @param fmessage a formatted string
 * @param ... only handles integer, string and char
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
			free(arg_str);
			arg_str = NULL;
			++i;
		}
	}
	write(1, "\n", 1);
	va_end(args);
}

/**
 * @brief A parser that parses int, char* arguments
 *
 * @param args argument list to parse
 * @param fspec format specifier
 * @return char* string generated from parsing arguments
 */
static char	*arg_parser(va_list args, const char fspec)
{
	char	*str;
	char	c;

	if (fspec == 's')
		str = ft_strdup(va_arg(args, char *));
	else if (fspec == 'd')
		str = ft_itoa(va_arg(args, int));
	else
	{
		if (fspec == 'c')
			c = va_arg(args, int);
		if (fspec == '%')
			c = '%';
		write(1, &c, 1);
		return (ft_strdup(""));
	}
	return (str);
}

// int main()
// {
// 	console_log("A plain message");
// 	console_log("%s %s %s", "A", "plain", "message");
// 	console_log("print INT_MAX: %d", INT_MAX);
// 	console_log("print INT_MIN: %d", INT_MIN);
// 	console_log("%d", 0);
// 	console_log("%c", 'E');
// }
