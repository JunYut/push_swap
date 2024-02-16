/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:57:57 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/16 16:59:26 by we               ###   ########.fr       */
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
console_log("select_sort...");		// debug
	while (A->size > 5)
	{
		rot_to_min(A);
		pb(B, A);
	}
	sort_five_A(A, B);
	while (B->size > 0)
		pa(A, B);
}

// Not finished
void	insert_sort(t_stack *A, t_stack *B)
{
	int	i;
	int	j;

	i = 0;
	while (++i < (int)(A->size))
	{
		j = -1;
		while (++j < i)
			pb(B, A);
		while (j-- > 0 && B->head->num < B->head->next->num)
		{
			sb(B);
			rra(A);
		}
		print_stack(B, "B");		// debug
		while (B->size > 0)
			pa(A, B);
		console_log("_________________________");		// debug
	}
}
