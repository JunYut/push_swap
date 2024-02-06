/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:08:47 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/06 11:12:44 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rot_to_max(t_stack *stack)
{
console_log("rot_to_max...");
	int	pos;

	pos = find_position(stack, find_max_node(stack)->num);
	fast_rotate(stack, pos);
}
