/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations0.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:21:44 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/16 12:32:13 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ra(t_stack *A)
{
	if (A->size < 2)
		return ;
	console_log("ra");
	rotate_up(A);
}

void	rb(t_stack *B)
{
	if (B->size < 2)
		return ;
	console_log("rb");
	rotate_up(B);
}

void	rr(t_stack *A, t_stack *B)
{
	console_log("rr");
	rotate_up(A);
	rotate_up(B);
}

void	rot_to_min(t_stack *stack)
{
	int	pos;

	pos = find_position(stack, find_min_node(stack)->num);
	fast_rotate(stack, pos);
}

int	rot_to_negatives(t_stack *stack)
{
console_log("rot_to_negatives...");
	int		pos;

	pos = find_negative(stack);
	if (pos == -1)
		return (0);
	fast_rotate(stack, pos);
	return (1);
}
