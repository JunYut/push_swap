/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:33:43 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/28 13:39:24 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	select_sort(t_stack *A, t_stack *B)
{
	int	i;

	i = 0;
	while (A->size > 5)
	{
		rot_to_min_a(A);
		pb(B, A);
		++i;
	}
	sort_five_a(A, B);
	while (i-- > 0)
		pa(A, B);
}
