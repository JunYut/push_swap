/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:22:09 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/21 10:39:42 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rra(t_stack *A)
{
	if (A->size < 2)
		return ;
	console_log("rra");
	rotate_down(A);
}

void	rrb(t_stack *B)
{
	if (B->size < 2)
		return ;
	console_log("rrb");
	rotate_down(B);
}

void	rrr(t_stack *A, t_stack *B)
{
	console_log("rrr");
	rotate_down(A);
	rotate_down(B);
}

/**
 * @brief A function that takes a position to determine which direction to
 * 		  rotate the stack
 *
 * @param stack the stack to rotate
 * @param pos the position to rotate to
 */
int	fast_rotate(t_stack *stack, int pos)
{
	int	i;

	if (pos < 0 || pos >= (int)stack->size)
		return (-1);
	if (pos == 0)
		return (1);
	i = -1;
	if (pos < (int)(stack->size + stack->size % 2) / 2)
		while (++i < pos)
			ra(stack);
	else
		while (++i < (int)stack->size - pos)
			rra(stack);
	return (1);
}
