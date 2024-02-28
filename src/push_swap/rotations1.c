/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:22:09 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/28 10:57:01 by tjun-yu          ###   ########.fr       */
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
 * 		  rotate stack A
 *
 * @param A stack to rotate
 * @param pos the position to rotate to
 * @return int 1 if the rotation was successful, 0 if the position is invalid
 */
int	fast_rotate_a(t_stack *A, int pos)
{
	int	i;

	if (pos < 0 || pos >= (int)A->size)
		return (0);
	if (pos == 0)
		return (1);
	i = -1;
	if (pos < (int)(A->size + A->size % 2) / 2)
		while (++i < pos)
			ra(A);
	else
		while (++i < (int)A->size - pos)
			rra(A);
	return (1);
}

/**
 * @brief A function that takes a position to determine which direction to
 * 		  rotate stack B
 *
 * @param B stack to rotate
 * @param pos the position to rotate to
 * @return int 1 if the rotation was successful, 0 if the position is invalid
 */
int	fast_rotate_b(t_stack *B, int pos)
{
	int	i;

	if (pos < 0 || pos >= (int)B->size)
		return (0);
	if (pos == 0)
		return (1);
	i = -1;
	if (pos < (int)(B->size + B->size % 2) / 2)
		while (++i < pos)
			rb(B);
	else
		while (++i < (int)B->size - pos)
			rrb(B);
	return (1);
}
