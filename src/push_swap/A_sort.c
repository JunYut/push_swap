/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:33:11 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/28 12:52:27 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_three_a(t_stack *A)
{
	if (A->head->num == find_max_node(A)->num)
		ra(A);
	else if (A->head->next->num == find_max_node(A)->num)
		rra(A);
	if (A->head->num > A->head->next->num)
		sa(A);
}

void	sort_five_a(t_stack *A, t_stack *B)
{
	int	popped;
	int	i;

	popped = 0;
	while (A->size > 3)
	{
		rot_to_min_a(A);
		pb(B, A);
		++popped;
	}
	sort_three_a(A);
	i = -1;
	while (++i < popped)
		pa(A, B);
}
