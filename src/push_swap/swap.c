/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:21:18 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/26 20:15:27 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sa(t_stack *A)
{
	write(1, "sa\n", 3);
	swap(A);
}

void	sb(t_stack *B)
{
	write(1, "sb\n", 3);
	swap(B);
}

void	ss(t_stack *A, t_stack *B)
{
	write(1, "ss\n", 3);
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
