/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:57:57 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/22 16:01:32 by we               ###   ########.fr       */
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

// +ve 5 stack: 28
// +ve 10 stack: 52
// +ve 100 stack: 1637
// +ve 500 stack: 31868
//-----------------------------------------------------------------------------
// mid_sort + insert_sort
// +ve 5 stack: 42 -> 42
// +ve 10 stack: 77 -> 77
// +ve 100 stack: 1064 -> 1116
// +ve 500 stack: 10623 -> 10970

void	select_sort(t_stack *A, t_stack *B)
{
	console_log("select_sort...");	// debug
	int i;

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

// mid_sort_A + insert_sort1
// +ve 5 stack: 37
// +ve 10 stack: 62
// +ve 100 stack: 950
// +ve 500 stack: 13528
void	select_sort1(t_stack *A, t_stack *B)
{
	console_log("select_sort1...");	// debug
	while (B->size > 0)
	{
		rot_to_max(B);
		pa(A, B);
	}
}

void bubble_sort(t_stack *A, t_stack *B)
{
	console_log("bubble_sort...");	// debug
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

// TODO: modify to use anchor min and max
// Requirements: 500: <= 5500, 100: <= 700
// +ve 5 stack: 32 -> 37 -> 35 -> 35 -> 37 -> 36 -> 37
// +ve 10 stack: 125 -> 80 -> 72 -> 72 -> 74 -> 80 -> 81
// +ve 100 stack: 5546 -> 4186 -> 4140 -> 2967 -> 2723 -> 2676 -> 2276
// +ve 500 stack: 134052 - > 94865 -> 94616 -> 66121 -> 63960 -> 63703 -> 53497
//-----------------------------------------------------------------------------
// mid_sort + insert_sort
// +ve 5 stack: 54 -> 48 -> 48
// +ve 10 stack: 103 -> 83 -> 83
// +ve 100 stack: 2710 -> 1528 -> 1446
// +ve 500 stack: 48653 -> 23695 -> 23058
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

// digit_sort + insert_sort
// +ve 5 stack: 39 ->
// +ve 10 stack: 69 -> 64
// +ve 100 stack: 2919 -> 2408
// +ve 500 stack: 69018 -> 45270
//-----------------------------------------------------------------------------
// mid_sort_A + insert_sort1
// +ve 5 stack: 37
// +ve 10 stack: 62
// +ve 100 stack: 2055
// +ve 500 stack: 41947
//-----------------------------------------------------------------------------
// mid_sort_A + mid_sort_B + pb*size + select_sort1
// +ve 5 stack: 49 -> 49 -> 49
// +ve 10 stack: 84 -> 84 -> 84
// +ve 100 stack: 1468 -> 1443 -> 1402
// +ve 500 stack: 23259 -> 23052 -> 22666
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

void	mid_sort(t_stack *A, t_stack *B)
{
	console_log("mid_sort...");	// debug
	mid_sort_A(A, B);
	mid_sort_B(B, A);
	insert_sort(A, B);
}
