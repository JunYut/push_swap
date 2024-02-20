/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:38:59 by we                #+#    #+#             */
/*   Updated: 2024/02/20 14:47:27 by tjun-yu          ###   ########.fr       */
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

int	find_smaller(t_stack *stack, int target)
{
	t_node	*current;
	int		i;

	current = stack->head;
	i = -1;
	while (++i < (int)(stack->size))
	{
		if (current->num < target)
			return (current->num);
		current = current->next;
	}
	return (-1);
}

int	find_larger(t_stack *stack, int target)
{
	t_node	*current;
	int		i;

	current = stack->head;
	i = -1;
	while (++i < (int)(stack->size))
	{
		if (current->num > target)
			return (current->num);
		current = current->next;
	}
	return (-1);
}
