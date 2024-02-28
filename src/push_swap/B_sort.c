/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:46:17 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/28 11:06:14 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_stack_B(t_stack *B, t_stack *A)
{
console_log("sort_stack_B...");		// debug
	if (is_sorted(B, 1))
		return ;
	if (B->size == 2)
		sb(B);
	if (B->size == 3)
		sort_three_b(B);
	if (B->size == 5)
		sort_five_b(B, A);
	if (B->size > 100)
		sort_hundred_B(B, A);
}

void	sort_three_b(t_stack *B)
{
console_log("sort_three_B...");		// debug
	if (B->head->num == find_min_node(B)->num)
		ra(B);
	else if (B->head->next->num == find_min_node(B)->num)
		rra(B);
	if (B->head->num < B->head->next->num)
		sa(B);
}

void	sort_five_b(t_stack *B, t_stack *A)
{
console_log("sort_five_B...");		// debug
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

void	sort_hundred_B(t_stack *B, t_stack *A)
{
console_log("sort_hundred_B...");		// debug
	(void)B;
	(void)A;
}
