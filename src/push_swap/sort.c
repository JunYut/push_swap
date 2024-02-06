/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:57:57 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/06 12:11:04 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort(t_stack *A, t_stack *B)
{
console_log("sorting...");		// debug
	if (is_sorted(A) && is_sorted(B))
		return ;
	sort_stack(A, B);
	sort_stack(B, A);
}

void	sort_stack(t_stack *stack, t_stack *other)
{
	if (is_sorted(stack))
		return ;
	if (stack->size == 2)
		sa(stack);
	if (stack->size == 3)
		sort_three(stack);
	if (stack->size == 5)
		sort_five(stack, other);
	if (stack->size > 100)
		sort_hundred(stack, other);
}

void	sort_three(t_stack *A)
{
console_log("sort_three...");		// debug
	if (A->head->num == find_max_node(A)->num)
		ra(A);
	else if (A->head->next->num == find_max_node(A)->num)
		rra(A);
	if (A->head->num > A->head->next->num)
		sa(A);
}

void	sort_five(t_stack *A, t_stack *B)
{
console_log("sort_five...");		// debug
	int	popped;

	popped = 0;
	while (A->size > 3)
	{
		rot_to_min(A);
		pb(B, A);
		++popped;
	}
	sort_three(A);
	while (B->size > 0)
		pa(A, B);
}

void	sort_hundred(t_stack *A, t_stack *B)
{
console_log("sort_hundred...");		// debug
	(void)A;
	(void)B;
}
