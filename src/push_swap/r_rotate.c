/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:22:09 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/25 14:54:30 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rra(t_stack *A)
{
	if (A->size < 2)
		return ;
	rotate_down(A);
}

void	rrb(t_stack *B)
{
	if (B->size < 2)
		return ;
	rotate_down(B);
}

void	rrr(t_stack *A, t_stack *B)
{
	rra(A);
	rrb(B);
}
