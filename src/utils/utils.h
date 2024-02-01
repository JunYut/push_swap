/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:26:01 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/01 13:20:21 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "../../includes/push_swap.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

// Memory util functions

void	*c_malloc(size_t size, const char *func);
void	free_strs(char ***strs);

// String util functions

void	console_log(const char *fmessage, ...);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);

#endif /* UTILS_H */
