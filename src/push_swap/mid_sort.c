/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mid_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:04:21 by we                #+#    #+#             */
/*   Updated: 2024/02/24 00:26:11 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// mid_sort:
// steps:
// +ve 5   stack: 38 -> 38 -> 38
// +ve 10  stack: 63 -> 63 -> 63
// +ve 100 stack: 594 -> 665 -> 722
// +ve 500 stack: 2983 -> 3441 -> 3870
//---------------------------------------------------------
// sorted rate:
// +ve 5   stack: 4/4 -> 4/4 -> 4/4
// +ve 10  stack: 9/9 -> 9/9 -> 9/9
// +ve 100 stack: 59/99 -> 63/99 -> 69/99
// +ve 500 stack: 260/499 -> 268/499 -> 279/499
void	mid_sort(t_stack *A, t_stack *B)
{
	console_log("mid_sort...");	// debug
	mid_sort_a0(A, B);
	mid_sort_b(B, A);
}

void	mid_sort_a0(t_stack *A, t_stack *B)
{
	console_log("mid sort A0...");	// debug
	size_t	half;
	int		mid;

	while (A->size > 0)
	{
		half = (int)(A->size + A->size % 2) / 2;
		mid = find_mid(A, -1, -1);
		while (A->size > half)
		{
			if (fast_rotate(A, find_position(A, find_smaller(A, mid))))
				pb(B, A);
			if (find_min_node(A)->num == mid)
			{
				fast_rotate(A, find_position(A, mid));
				pb(B, A);
			}
		}
		if (A->size == 1)
			pb(B, A);
	}
}

void	mid_sort_a(t_stack *A, t_stack *B)
{
	console_log("mid sort A...");	// debug
	size_t	half;
	int		mid;
	int		chunck;

	while (A->size > 0)
	{
		half = (int)(A->size + A->size % 2) / 2;
		mid = find_mid(A, -1, -1);
		chunck = 0;
		while (A->size > half)
		{
			if (fast_rotate(A, find_position(A, find_smaller(A, mid)))
			|| find_min_node(A)->num == mid)
			{
				++chunck;
				pb(B, A);
			}
			if (find_min_node(A)->num == mid)
				fast_rotate(A, find_position(A, mid));
		}
		if (A->size == 1)
		{
			++chunck;
			pb(B, A);
		}
		select_sort_B(A, B, chunck);
	}
}

//
void	mid_sort_b(t_stack *B, t_stack *A)
{
	console_log("mid sort B...");	// debug
	size_t	half;
	int		mid;

	while (B->size > 0)
	{
		half = (int)(B->size + B->size % 2) / 2;
		mid = find_mid(B, -1, -1);
		while (B->size > half)
		{
			if (fast_rotate(B, find_position(B, find_larger(B, mid))))
				pa(A, B);
			if (find_max_node(B)->num == mid)
			{
				fast_rotate(B, find_position(B, mid));
				pa(A, B);
			}
		}
		if (B->size == 1)
			pa(A, B);
	}
}

//clean_up:
// steps:
// +ve 5   stack: 46 -> 38 -> 48
// +ve 10  stack: 76 -> 63 -> 94
// +ve 100 stack: 2820 -> 4070 -> 1261
// +ve 500 stack: 66042 -> 116639 -> 11510
//---------------------------------------------------------
// sorted rate:
// +ve 5   stack: 4/4
// +ve 10  stack: 9/9
// +ve 100 stack: 99/99
// +ve 500 stack: 499/499
void	clean_up(t_stack *A, t_stack *B, int half)
{
	console_log("clean_up...");	// debug
	int	i;

	if (half > 5)
		clean_up(A, B, half / 2);
	i = -1;
	while (++i < half)
		pb(B, A);
	while (B->size > 0)
	{
		if (fast_rotate(B, find_position(B, find_max_node(B)->num)))
			pa(A, B);
	}
}
