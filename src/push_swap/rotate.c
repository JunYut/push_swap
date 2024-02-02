/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: v <v@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:21:44 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/02 12:24:44 by v                ###   ########.fr       */
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
	int		pos;
	int		i;

	pos = find_position(stack, find_min_node(stack)->num);
	if (pos <= 0)
		return ;
	i = -1;
	if (pos < (int)stack->size / 2)
		while (++i < pos)
			ra(stack);
	else
		while (++i < (int)stack->size - pos)
			rra(stack);
}

int	rot_to_negatives(t_stack *stack)
{
	int		pos;
	int		i;

	pos = find_negative(stack);
	if (pos == -1)
		return (0);
	i = -1;
	if (pos < (int)stack->size / 2)
		while (++i < pos)
			ra(stack);
	else
		while (++i < (int)stack->size - pos)
			rra(stack);
	return (1);
}
