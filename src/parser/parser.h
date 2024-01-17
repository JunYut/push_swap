/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:26:04 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/17 12:45:33 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include "../../includes/push_swap.h"
# include <limits.h>

t_node	*parser(int argc, char *argv[]);
long	ft_atoi(const char *integer);
char	*ft_itoa(int num);

#endif // PARSER_H
