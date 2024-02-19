/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:57:57 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/19 12:46:50 by we               ###   ########.fr       */
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

// /Fuck still shit
void	insert_sort(t_stack *A, t_stack *B)
{
	int min;
	int i;
	int j;

	fast_rotate(A, A->size - 2);
	i = 3;
	while (--i > 0)
	{
		min = find_position(A, find_min_node(A)->num);
		pop_swap(min, A, B);
		if (i == 2)
			pb(B, A);
		if (i == 1)
			pa(A, B);
	}
	ra(A);
	ra(A);
	i = 0;
	while (++i < (int)(A->size))
	{
		j = i - 1;
		fast_rotate(A, j);
		while (j-- >= 0 && A->head->num > A->head->next->num)
		{
			if (!is_sorted(A, 1))
				sa(A);
			if (i != 1 && !is_sorted(A, 1))
				rra(A);
		}
		while (j-- >= 0)	// can be optimised by 'fast_rotate()'
			rra(A);
	}
}

// No failures yet(?)
void	insert_sort1(t_stack *A, t_stack *B)
{
	int	i;

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
		while (i-- > 0)
			rra(A);
	}
	(void)B;
}
