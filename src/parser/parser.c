/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:29:21 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/27 15:35:50 by tjun-yu          ###   ########.fr       */
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
t_stack	*parser(int count, char *argv[])
{
	t_stack	*stack;
	int		i;

	stack = new_stack();
	i = -1;
	while (++i < count)
		push(stack, ft_atoi(argv[count - i - 1]));
	return (stack);
}
