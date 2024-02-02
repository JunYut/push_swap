/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: v <v@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:22:09 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/02 12:42:26 by v                ###   ########.fr       */
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

void	rot_to_digit_tier(t_stack *A, int tier)
{
	int		i;

	if (tier <= 0)
		return ;
	i = -1;
	if (tier < (int)A->size / 2)
		while (++i < tier)
			ra(A);
	else
		while (++i < (int)A->size - tier)
			rra(A);
}
