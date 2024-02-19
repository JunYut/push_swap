/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:38:59 by we                #+#    #+#             */
/*   Updated: 2024/02/19 12:09:52 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "stack.h"

int	find_unsorted(t_stack *stack)
{
	t_node	*current;
	int		pos;
	int		i;

	current = stack->head;
	pos = 0;
	i = -1;
	while (++i < (int)(stack->size - 1))
	{
		if (current->num > current->next->num)
			return (pos);
		current = current->next;
		++pos;
	}
	return (-1);
}
