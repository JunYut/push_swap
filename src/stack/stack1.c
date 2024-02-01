/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:58:22 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/01 15:03:33 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	find_position(t_stack *stack, int target)
{
	int		i;
	t_node	*curr;

	i = 0;
	curr = stack->head;
	while (curr != NULL)
	{
		if (curr->num == target)
			return (i);
		++i;
		curr = curr->next;
	}
	return (-1);
}

t_node	*find_max_node(t_stack *stack)
{
	t_node	*max;
	t_node	*curr;

	curr = stack->head;
	max = curr;
	if (curr->num > max->num)
		max = curr;
	curr = curr->next;
	while (curr != stack->tail->next)
	{
		if (curr->num > max->num)
			max = curr;
		curr = curr->next;
	}
	return (max);
}

t_node	*find_min_node(t_stack *stack)
{
	t_node	*min;
	t_node	*curr;

	curr = stack->head;
	min = curr;
	if (curr->num < min->num)
		min = curr;
	curr = curr->next;
	while (curr != stack->head)
	{
		if (curr->num < min->num)
			min = curr;
		curr = curr->next;
	}
	return (min);
}
