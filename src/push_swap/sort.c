/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:57:57 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/15 19:17:40 by we               ###   ########.fr       */
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

void	insert_sort(t_stack *A, t_stack *B)
{
	int	i;
	int	j;

	i = -1;
	while (++i < (int)(A->size))
	{
		j = i + 1;
		while (--j > 0)
			pb(B, A);
		j = i + 1;
		while (--j > 0 && B->head->num > A->head->num)
		{
			pa(A, B);
			sa(A);
		}
	}
}
