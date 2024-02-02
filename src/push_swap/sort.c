/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: v <v@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:57:57 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/02 15:22:22 by v                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort(t_stack *A, t_stack *B)
{
	console_log("sorting...");		// debug
	if (A->size == 2)
		sa(A);
	else if (A->size == 3)
		sort_three(A);
	else if (A->size <= 5)
		sort_five(A, B);
	else
		sort_hundred(A, B);
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
	while (A->size > 3)
	{
		rot_to_min(A);
		pb(B, A);
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
