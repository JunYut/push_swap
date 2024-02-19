/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:57:57 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/19 13:29:42 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort(t_stack *A, t_stack *B)
{
	if (is_sorted(A, 1) && is_sorted(B, -1))
		return ;
	sort_stack_A(A, B);
	sort_stack_B(B, A);
	while (B->size > 0)
		pa(A, B);
}

void	select_sort(t_stack *A, t_stack *B)
{
	// console_log("select_sort...");		// debug
	while (A->size > 5)
	{
		rot_to_min(A);
		pb(B, A);
	}
	sort_five_A(A, B);
	while (B->size > 0)
		pa(A, B);
}

void bubble_sort(t_stack *A, t_stack *B)
{
	// console_log("bubble_sort...");    // debug
	int i;
	int j;

	i = -1;
	while (++i < (int)(A->size))
	{
		j = -1;
		while (++j < (int)(A->size - i - 1))
		{
			if (A->head->num > A->head->next->num)
				sa(A);
			ra(A);
		}
		j = -1;
		while (++j < (int)(A->size - i - 1))
			rra(A);
	}
	(void)B;
}

// No failures yet(?)
//5 stack: 42
//10 stack: 125
//100 stack: 9661
//500 stack: 241857
void	insert_sort(t_stack *A, t_stack *B)
{
	int	anchor;
	int	i;

	rot_to_min(A);
	anchor = find_min_node(A)->num;
	while (!is_sorted(A, 1))
	{
		i = find_unsorted(A);
		console_log("unsorted: %d", i);	// debug
		console_log("fast rotate...");	// debug
		fast_rotate(A, i);
		++i;
		console_log("! swapping...");	// debug
		while (--i >= 0 && A->head->num > A->head->next->num)
		{
			sa(A);
			if (i != 0 && !is_sorted(A, 1))
				rra(A);
		}
		console_log("returning...");	// debug
		fast_rotate(A, find_position(A, anchor));
		// while (i-- > 0)
		// 	rra(A);
	}
	(void)B;
	(void)anchor;
}
