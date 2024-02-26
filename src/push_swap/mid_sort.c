/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mid_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:04:21 by we                #+#    #+#             */
/*   Updated: 2024/02/26 12:25:56 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// mid_sort:
// steps:
// +ve 5   stack: 38 -> 38 -> 38 -> 37 -> 39
// +ve 10  stack: 63 -> 63 -> 63 -> 58 -> 61
// +ve 100 stack: 594 -> 665 -> 722 -> 549 -> 512
// +ve 500 stack: 2983 -> 3441 -> 3870 -> 2740 -> 2503
//---------------------------------------------------------
// sorted rate:
// +ve 5   stack: 4/4 -> 4/4 -> 4/4 -> 4/4 -> 3/4
// +ve 10  stack: 9/9 -> 9/9 -> 9/9 -> 7/9 -> 7/9
// +ve 100 stack: 59/99 -> 63/99 -> 69/99 -> 54/99 -> 56/99
// +ve 500 stack: 260/499 -> 268/499 -> 279/499 -> 253/499 -> 258/499
void	mid_sort(t_stack *A, t_stack *B)
{
	console_log("mid_sort...");	// debug
	mid_sort_a0(A, B);
	mid_sort_b0(B, A);
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

// mid_sort_a:
// steps:
// +ve 5   stack: 63
// +ve 10  stack: 129
// +ve 100 stack: 2197
// +ve 500 stack: 21998
void	mid_sort_a(t_stack *A, t_stack *B)
{
	console_log("mid sort A...");	// debug
	size_t	half;
	int		mid;

	while (A->size > 0)
	{
		half = (int)(A->size + A->size % 2) / 2;
		mid = find_mid(A, -1, -1);
		while (A->size > half)
		{
			if (fast_rotate(A, find_position(A, find_smaller(A, mid)))
			|| find_min_node(A)->num == mid)
				pb(B, A);
			if (find_min_node(A)->num == mid)
				fast_rotate(A, find_position(A, mid));
		}
		if (A->size == 1)
			pb(B, A);
		select_sort_B(A, B);
	}
	while (B->size > 0)
		pa(A, B);
}

void	mid_sort_b0(t_stack *B, t_stack *A)
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
			// if (A->head->num > A->head->next->num)
			// 	sa(A);
			insert_sort(A, B);
		}
		if (B->size == 1)
			pa(A, B);
	}
}

void	mid_sort_b(t_stack *B, t_stack *A)
{
	console_log("mid sort B0...");	// debug
	size_t	half;
	int		mid;
	int		i;

	half = (int)(B->size + B->size % 2) / 2;
	mid = find_mid(B, -1, -1);
	i = 0;
	while (B->size > half)
	{
		if (fast_rotate(B, find_position(B, find_larger(B, mid))))
			pa(A, B);
		if (find_max_node(A)->num == mid)
		{
			fast_rotate(A, find_position(A, mid));
			pb(B, A);
		}
			++i;
	}
	while (i-- > 0)
		pb(B, A);
}

//clean_up:
// steps:
// +ve 5   stack: 46 -> 38 -> 48 -> 48
// +ve 10  stack: 76 -> 63 -> 94 -> 104
// +ve 100 stack: 2820 -> 4070 -> 1261 -> 1314
// +ve 500 stack: 66042 -> 116639 -> 11510 -> 10940
//---------------------------------------------------------
// sorted rate:
// +ve 5   stack: 4/4
// +ve 10  stack: 9/9
// +ve 100 stack: 99/99
// +ve 500 stack: 499/499
void	clean_up(t_stack *A, t_stack *B, int half)
{
	console_log("clean_up...");	// debug
	t_node	*head;
	t_node	*tail;
	int	i;

	head = A->head; (void)head;
	tail = A->tail; (void)tail;
	if (half > 5)
		clean_up(A, B, half / 2);
	i = -1;
	while (++i < half)
		pb(B, A);
	// while (B->size > 0)
		bubble_sort(A, B);
	if (A->size == 0)
		while (B->size > 0)
			pa(A, B);
	// if (is_sorted1(head, tail, 1))
	// 	return ;
	// fast_rotate(A, half);
}
