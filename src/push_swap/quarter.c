/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quarter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:31:04 by we                #+#    #+#             */
/*   Updated: 2024/02/26 16:20:22 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// mid_sort:
// steps:
// +ve 5   stack: 28
// +ve 10  stack: 51
// +ve 100 stack: 448
// +ve 500 stack: 2182
//---------------------------------------------------------
// sorted rate:
// +ve 5   stack: 3/4
// +ve 10  stack: 7/9
// +ve 100 stack: 50/99
// +ve 500 stack: 258/499
void	quarter_sort(t_stack *A, t_stack *B)
{
	console_log("quarter_sort...");	// debug
	quarter_sort_a(A, B);
	quarter_sort_b(B, A);
}

void	quarter_sort_a(t_stack *A, t_stack *B)
{
	console_log("quarter_sort_a...");	// debug
	size_t	quarter;
	int		q25;

	while (A->size > 3)
	{
		quarter = A->size - (int)(A->size + A->size % 2) / 4;
		q25 = find_q25(A, -1, -1);
		// console_log("A->size: %d", A->size);    // debug
		// console_log("quarter: %d", quarter);    // debug
		// console_log("q25: %d", q25);    // debug
		while (A->size >= 4 && A->size > quarter)
		{
			if (fast_rotate(A, find_position(A, find_smaller(A, q25))))
				pb(B, A);
			if (find_min_node(A)->num == q25)
			{
				fast_rotate(A, find_position(A, q25));
				pb(B, A);
			}
		}
	}
	sort_three_A(A);
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
		while (B->size >= 4 && B->size > quarter)
		{
			if (fast_rotate(B, find_position(B, find_larger(B, q75))))
				pa(A, B);
			if (find_max_node(B)->num == q75)
			{
				fast_rotate(B, find_position(B, q75));
				pa(A, B);
			}
		}
	}
	while (B->size > 0)
	{
		rot_to_max(B);
		pa(A, B);
	}
}
