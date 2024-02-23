/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:57:57 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/24 00:40:14 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// mid_sort + insert_sort
// +ve 5   stack: 42 -> 
// +ve 10  stack: 77 -> 
// +ve 100 stack: 1064 -> 
// +ve 500 stack: 10623
void	select_sort(t_stack *A, t_stack *B)
{
	console_log("select_sort...");	// debug
	int	i;

	i = 0;
	while (A->size > 5)
	{
		rot_to_min(A);
		pb(B, A);
		++i;
	}
	sort_five_A(A, B);
	while (i-- > 0)
		pa(A, B);
}

//
void	select_sort_half(t_stack *A, t_stack *B)
{
	console_log("select_sort1...");	// debug
	size_t	half;

	half = (A->size + A->size % 2) / 2;
	while (A->size > half)
	{
		rot_to_min(A);
		pb(B, A);
	}
}

// mid_sort_a0 + mid_sort_b + insert_sort_B
// +ve 5   stack: 48
// +ve 10  stack: 83
// +ve 100 stack: 1528
// +ve 500 stack: 23695
void	insert_sort(t_stack *A, t_stack *B)
{
	console_log("insert_sort...");	// debug
	pb(B, A);
	while (A->size > 0)
	{
			fast_rotate(B, find_position(B, find_smaller(B, A->head->num)));
			pb(B, A);
			rot_to_max(B);
	}
	while (B->size > 0)
		pa(A, B);
}

//
void	insert_sort1(t_stack *A, t_stack *B)
{
	console_log("insert_sort1...");	// debug
	fast_rotate(B, find_position(B, find_max_node(B)->num));
	pa(A, B);
	while (B->size > 0)
	{
		if (B->head->num < B->head->next->num)
			sb(B);
		fast_rotate(A, find_position(A, find_larger(A, B->head->num)));
		pa(A, B);
		rot_to_min(A);
	}
}

// mid_sort_A + insert_sort_B
// +ve 5   stack: 58 -> 48 -> 48 -> 48
// +ve 10  stack: 99 -> 83 -> 83 -> 83
// +ve 100 stack: 3081 -> 2261 -> 1196 -> 1155
// +ve 500 stack: 48995 -> 42965 -> 14666 -> 14535
void	select_sort_B(t_stack *A, t_stack *B, int chunck)
{
	console_log("insert_sort_B...");	// debug
	int i;

	i = 0;
	while (chunck-- > 0)
	{
		rot_to_max(B);
		pa(A, B);
		++i;
	}
	while (i-- > 0)
		pb(B, A);
}
