/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quarter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:31:04 by we                #+#    #+#             */
/*   Updated: 2024/02/26 17:01:12 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// quarter_sort:
// steps:
// +ve 5   stack: 28 -> 31
// +ve 10  stack: 51 -> 55
// +ve 100 stack: 448 -> 744
// +ve 500 stack: 2182 -> 4097
//---------------------------------------------------------
// sorted rate:
// +ve 5   stack: 3/4 -> 4/4
// +ve 10  stack: 7/9 -> 9/9
// +ve 100 stack: 50/99 -> 68/99
// +ve 500 stack: 258/499 -> 269/499
void	quarter_sort(t_stack *A, t_stack *B)
{
	console_log("quarter_sort...");	// debug
	quarter_sort_a(A, B);
	// mid_sort_a0(A, B);
	// quarter_sort_b(B, A);
	mid_sort_b0(B, A);
}

void	quarter_sort_a(t_stack *A, t_stack *B)
{
	console_log("quarter_sort_a...");	// debug
	size_t	quarter;
	int		q25;

	while (A->size > 5)
	{
		quarter = A->size - (int)(A->size + A->size % 2) / 4;
		q25 = find_q25(A, -1, -1);
		// console_log("A->size: %d", A->size);    // debug
		// console_log("quarter: %d", quarter);    // debug
		// console_log("q25: %d", q25);    // debug
		// console_log("q75: %d", find_q75(A, -1, -1));    // debug
		while (A->size > 5 && A->size > quarter)
		{
			if (fast_rotate(A, find_position(A, find_smaller(A, q25))))
				pb(B, A);
			if (find_min_node(A)->num == q25)
			{
				fast_rotate(A, find_position(A, q25));
				pb(B, A);
			}
		}
		// print_stack(B, "B");		// debug
	}
	sort_five_A(A, B);
}

void	quarter_sort_b(t_stack *B, t_stack *A)
{
	console_log("quarter_sort_b...");	// debug
	size_t	quarter;
	int		q75;

	while (B->size > 3)
	{
		quarter = B->size - (int)(B->size + B->size % 2) / 4;
		q75 = find_q75(B, -1, -1);
		while (B->size > 3 && B->size > quarter)
		{
			if (fast_rotate(B, find_position(B, find_larger(B, q75))))
				pa(A, B);
			if (find_max_node(B)->num == q75)
			{
				fast_rotate(B, find_position(B, q75));
				pa(A, B);
			}
		}
		// print_stack(A, "A");		// debug
	}
	while (B->size > 0)
	{
		rot_to_max(B);
		pa(A, B);
	}
}
