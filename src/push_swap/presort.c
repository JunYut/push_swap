/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:22:30 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/20 16:01:41 by tjun-yu          ###   ########.fr       */
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
