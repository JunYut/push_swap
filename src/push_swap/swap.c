/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:21:18 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/18 17:39:30 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sa(t_stack *A)
{
	console_log("sa");
	swap(A);
}

void	sb(t_stack *B)
{
	console_log("sb");
	swap(B);
}

void	ss(t_stack *A, t_stack *B)
{
	console_log("ss");
	swap(A);
	swap(B);
}

// Complexity: 5 + 2n
// Use this when distance is greater than 0
void	pop_swap(int pos, t_stack *A, t_stack *B)
{
	int	i;

	--pos;
	ra(A);
	i = -1;
	while (++i < pos)
		pb(B, A);
	rra(A);
	sa(A);
	ra(A);
	i = -1;
	while (++i < pos)
		pa(A, B);
	rra(A);
}

// Complexity: 1 + 4n
void	rotate_swap(int dist, t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < dist)
	{
		sa(stack);
		ra(stack);
	}
	sa(stack);
	i = -1;
	while (++i < dist)
	{
		rra(stack);
		sa(stack);
	}
}
