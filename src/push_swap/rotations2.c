/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:08:47 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/19 20:29:28 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rot_to_max(t_stack *stack)
{
	fast_rotate(stack, find_position(stack, find_max_node(stack)->num));
}

