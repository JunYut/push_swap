/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:57:57 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/18 16:45:06 by we               ###   ########.fr       */
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
	console_log("select_sort...");		// debug
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
	console_log("bubble_sort...");    // debug
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

// Not finished
// Input:		Output:
// 4 1 2 9 5 10 6 0 8 7    |    8 0 1 2 4 5 6 7 9 10
// 4 1 2 9 5 10 6 0 7 8    |    8 0 1 2 4 5 6 7 9 10
// 4 1 2 9 5 10 7 0 8 6    |    8 0 1 2 4 5 6 7 9 10
// 4 1 2 9 5 10 7 0 6 8    |    8 0 1 2 4 5 6 7 9 10
// if first 2 number is not largest and second largest, fuck shit
void	insert_sort(t_stack *A, t_stack *B)
{
	// console_log("insert_sort...");    // debug
	int i;
	int j;

	fast_rotate(A, A->size - 2);
	if (A->head->num > A->head->next->num)
		sa(A);
	ra(A);
	ra(A);
	i = 0;
	while (++i < (int)(A->size))
	{
		print_stack(A, "A");	// debug
		j = i - 1;
		console_log("i: %d, j: %d", i, j);    // debug
		fast_rotate(A, j);
		while (j-- >= 0 && A->head->num > A->head->next->num)
		{
			if (!is_sorted(A, 1))
				sa(A);
			print_stack(A, "A");	// debug
			if (i != 1 && !is_sorted(A, 1))
				rra(A);
			print_stack(A, "A");	// debug
		}
		while (j-- >= 0)
			rra(A);
		print_stack(A, "A");	// debug
	}
	(void)B;
}
