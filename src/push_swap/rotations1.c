/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:22:09 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/26 20:15:14 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rra(t_stack *A)
{
	if (A->size < 2)
		return ;
	write(1, "rra\n", 4);
	rotate_down(A);
}

void	rrb(t_stack *B)
{
	if (B->size < 2)
		return ;
	write(1, "rrb\n", 4);
	rotate_down(B);
}

void	rrr(t_stack *A, t_stack *B)
{
	write(1, "rrr\n", 4);
	rotate_down(A);
	rotate_down(B);
}

/**
 * @brief A function that takes a position to determine which direction to
 * 		  rotate the stack
 *
 * @param stack the stack to rotate
 * @param pos the position to rotate to
 * @return int 1 if the rotation was successful, 0 if the position is invalid
 */
int	fast_rotate(t_stack *stack, int pos)
{
	int	i;

	if (pos < 0 || pos >= (int)stack->size)
		return (0);
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
