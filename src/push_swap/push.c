/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:20:15 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/26 20:14:26 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa(t_stack *A, t_stack *B)
{
	if (B->size == 0)
		return ;
	write(1, "pa\n", 3);
	push(A, pop(B));
}

void	pb(t_stack *B, t_stack *A)
{
	if (A->size == 0)
		return ;
	write(1, "pb\n", 3);
	push(B, pop(A));
}
