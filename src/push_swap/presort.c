/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: v <v@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:22:30 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/02 11:51:53 by v                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	presort(t_stack *A, t_stack *B)
{
console_log("presort...");		// debug
	push_negatives(A, B);
console_log("presort...");		// debug
	digit_sort(A, B);
}

void	push_negatives(t_stack *A, t_stack *B)
{
	int	i;

	i = 0;
	while (i < (int)A->size)
	{
console_log("push_negatives...");		// debug
		if (rot_to_negatives(A))
			pb(B, A);
		++i;
	}
}

void	digit_sort(t_stack *A, t_stack *B)
{
	int	digits;
	int	i;
	int	j;
	digits = count_digits(A->range);
	i = -1;
	while (++i < digits)
	{
		j = -1;
		while (++j < (int)A->size)
		{
			if ((int)A->head->digits == i)
				pb(B, A);
			else
				ra(A);
		}
	}
}
