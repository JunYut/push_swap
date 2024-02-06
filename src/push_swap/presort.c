/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:22:30 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/06 11:36:30 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	presort(t_stack *A, t_stack *B)
{
console_log("presort...");		// debug
	if (A->size <= 5)
		return ;
	push_negatives(A, B);
	if (A->size <= 5 || B->size <= 5)
		return ;
	digit_sort(A, B);
}

void	push_negatives(t_stack *A, t_stack *B)
{
console_log("push_negatives...");		// debug
	int	i;

	i = 0;
	while (i < (int)A->size)
	{
		if (rot_to_negatives(A))
			pb(B, A);
		++i;
	}
print_stack(A, "A");	print_stack(B, "B");	// debug
}

// incomplete
// not considering negative numbers
void	digit_sort(t_stack *A, t_stack *B)
{
console_log("digit_sort...");		// debug
	int	i;

	if (find_max_node(A)->digits == find_min_node(A)->digits)
		return ;
	i = -1;
	while (++i < (int)count_digits(A->range))
	{
		rot_to_digit_tier(A, i);
		pb(B, A);
	}
print_stack(A, "A");	print_stack(B, "B");	// debug
}
