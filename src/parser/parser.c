/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:29:21 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/18 14:04:30 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

/**
 * @brief This function parses the string array to generate a stack of integers
 *
 * @attention ONLY USE THIS FUNCTION AFTER INPUT VALIDATION!!!
 * @param argc amount of strings in argv
 * @param argv a string array
 * @return t_stack* a stack that consists of useful datas
 */
t_stack	*parser(int argc, char *argv[])
{
	t_stack	*stack;
	int		i;

	stack = new_stack();
	i = 0;
	while (++i < argc)
		push(stack, ft_atoi(argv[i]));
	return (stack);
}
