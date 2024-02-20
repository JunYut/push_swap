/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:57:57 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/20 13:09:31 by tjun-yu          ###   ########.fr       */
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

// TODO: modify to accomodate with digit_sort
// Requirements: 500: <= 5500, 100: <= 700
//5 stack: 32 -> 37 -> 35 -> 35
//10 stack: 125 -> 80 -> 72 -> 72
//100 stack: 5546 -> 4186 -> 4140 -> 2967
//500 stack: 134052 - > 94865 -> 94616 -> 66121
void	insert_sort(t_stack *A, t_stack *B)
{
	console_log("insert_sort...");	// debug
	rot_to_min(A);
	pb(B, A);
	while (A->size > 0)
	{
			if (A->head->num > A->head->next->num)
				sa(A);
			fast_rotate(B, find_position(B, find_smaller(B, A->head->num)));
			pb(B, A);
			rot_to_max(B);
	}
	while (B->size > 0)
		pa(A, B);
}

void	insert_sort1(t_stack *A, t_stack *B)
{
	(void)B;
	(void)A;
}
