/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:26:01 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/12 12:39:36 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

// Memory util functions

void	*c_malloc(size_t size, const char *func);

//String util functions

void	console_log(const char *fmessage, ...);
char	*arg_parser(va_arg args);
size_t	ft_strlen(const char *str);

#endif /* UTILS_H */
