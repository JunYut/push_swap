/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:46:17 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/28 12:53:18 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_three_b(t_stack *B)
{
	if (B->head->num == find_min_node(B)->num)
		ra(B);
	else if (B->head->next->num == find_min_node(B)->num)
		rra(B);
	if (B->head->num < B->head->next->num)
		sa(B);
}

void	sort_five_b(t_stack *B, t_stack *A)
{
	int	popped;
	int	i;

	popped = 0;
	while (B->size > 3)
	{
		rot_to_max_b(B);
		pa(A, B);
		++popped;
	}
	sort_three_b(B);
	i = -1;
	while (++i < popped)
		pb(B, A);
}
