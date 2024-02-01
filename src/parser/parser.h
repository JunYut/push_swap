/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:26:04 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/01 13:50:41 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include "../../includes/push_swap.h"
# include <limits.h>
# include <stddef.h>

typedef struct s_stack	t_stack;

t_stack	*parser(int count, char *argv[], int argc);
char	**ft_split(char const *str, char c);
long	ft_atoi(const char *integer);
char	*ft_itoa(int num);

size_t	count_strs(char **strs);
size_t	count_digits(long num);

#endif // PARSER_H
