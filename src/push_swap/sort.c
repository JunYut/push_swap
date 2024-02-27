/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:05:24 by we                #+#    #+#             */
/*   Updated: 2024/02/27 20:10:22 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort(t_stack *A, t_stack *B)
{
	if (A->size == 2)
		sa(A);
	if (A->size == 3)
		sort_three_a(A);
	if (A->size <= 5)
		sort_five_a(A, B);
	else
	{
		quarter_sort(A, B);
		select_sort(A, B);
	}
}
