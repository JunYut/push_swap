/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:33:11 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/16 12:32:46 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_stack_A(t_stack *A, t_stack *B)
{
console_log("sort_stack_A...");		// debug
	if (is_sorted(A, -1))
		return ;
	if (A->size == 2)
		sa(A);
	if (A->size == 3)
		sort_three_A(A);
	if (A->size == 5)
		sort_five_A(A, B);
	if (A->size > 100)
		sort_hundred_A(A, B);
}

void	sort_three_A(t_stack *A)
{
	if (A->head->num == find_max_node(A)->num)
		ra(A);
	else if (A->head->next->num == find_max_node(A)->num)
		rra(A);
	if (A->head->num > A->head->next->num)
		sa(A);
}

void	sort_five_A(t_stack *A, t_stack *B)
{
	int	popped;
	int	i;

	popped = 0;
	while (A->size > 3)
	{
		rot_to_min(A);
		pb(B, A);
		++popped;
	}
	sort_three_A(A);
	i = -1;
	while (++i < popped)
		pa(A, B);
}

void	sort_hundred_A(t_stack *A, t_stack *B)
{
console_log("sort_hundred_A...");		// debug
	(void)A;
	(void)B;
}
