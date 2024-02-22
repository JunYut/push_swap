/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:22:30 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/22 11:39:18 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	presort(t_stack *A, t_stack *B)
{
	if (A->size <= 5)
		return ;
	push_negatives(A, B);
	if (A->size <= 5 && B->size <= 5)
		return ;
	digit_sort(A, B);
}

void	push_negatives(t_stack *A, t_stack *B)
{
	int	i;

	i = 0;
	while (i < (int)A->size)
	{
		if (rot_to_negatives(A))
			pb(B, A);
		++i;
	}
}

// incomplete
// +ve 5 stack: 16
// +ve 10 stack: 30
// +ve 100 stack: 345
// +ve 500 stack: 1889
void	digit_sort(t_stack *A, t_stack *B)
{
	console_log("digit_sort...");		// debug
	int	max_dgts;
	int	min_dgts;
	int	dgt_tier;

	max_dgts = find_max_node(A)->digits;
	min_dgts = find_min_node(A)->digits;
	dgt_tier = min_dgts - 1;
	while (++dgt_tier <= max_dgts)
	{
		while (fast_rotate(A, find_digit(A, dgt_tier)) == 1)
			pb(B, A);
		if (B->size > 1 && B->head->num < B->head->next->num)
			sb(B);
	}
}

// nah
void	mid_sort_A(t_stack *A, t_stack *B)
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

void	mid_sort_B(t_stack *B, t_stack *A)
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
