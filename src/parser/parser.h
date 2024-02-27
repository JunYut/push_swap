/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:26:04 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/27 14:49:59 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include "../../includes/push_swap.h"
# include <limits.h>
# include <stddef.h>

typedef struct s_stack	t_stack;

t_stack	*parser(int count, char *argv[]);
char	**ft_split(char const *str, char c);
long	ft_atoi(const char *integer);
char	*ft_itoa(int num);

size_t	count_strs(char **strs);
int		count_digits(long num);

int		absolute(int num);

#endif // PARSER_H
