/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:29:26 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/15 19:08:41 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * @brief Check if the stack is sorted
 *
 * @param A stack to check
 * @param direction -1 for descending, 1 for ascending
 * @return int 1 if sorted, 0 if not
 */
int	is_sorted(t_stack *A, int direction)
{
	t_node	*current;
	int		i;

	if (A->size <= 1)
		return (1);
	current = A->head;
	i = -1;
	while (++i < (int)A->size - 1)
	{
		if (direction == -1 && current->num < current->next->num)
			return (0);
		else if (direction == 1 && current->num > current->next->num)
			return (0);
		current = current->next;
	}
	return (1);
}
