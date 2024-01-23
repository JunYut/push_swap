/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:26:04 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/23 11:28:27 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include "../../includes/push_swap.h"
# include <limits.h>
# include <stddef.h>

typedef struct s_stack	t_stack;

t_stack	*parser(int argc, char *argv[]);
long	ft_atoi(const char *integer);
char	*ft_itoa(int num);
size_t	count_digits(long num);

#endif // PARSER_H
