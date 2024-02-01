/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:22:30 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/01 15:58:00 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	presort(t_stack *A, t_stack *B)
{
	push_negatives(A, B);
}

void	push_negatives(t_stack *A, t_stack *B)	// infinite loop
{
	t_node	*node;
	int		i;

	i = 0;
	while (i < (int)A->size)
	{
		node = A->head;
		if (node->num < 0)
		{
			pb(B, A);
			i++;
		}
		else
			ra(A);
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
