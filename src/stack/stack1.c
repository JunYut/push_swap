/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:58:22 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/26 12:04:13 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	find_digit(t_stack *stack, int digit)
{
	t_node	*curr;
	int		i;

	if (stack->size == 0)
		return (-1);
	curr = stack->head;
	i = 0;
	if ((int)curr->digits == digit)
		return (i);
	++i;
	curr = curr->next;
	while (curr != stack->head)
	{
		if ((int)curr->digits == digit)
			return (i);
		++i;
		curr = curr->next;
	}
	return (-1);
}

int	find_negative(t_stack *stack)
{
	t_node	*curr;
	int		i;

	if (stack->size == 0)
		return (-1);
	curr = stack->head;
	i = 0;
	if (curr->num < 0)
		return (i);
	++i;
	curr = curr->next;
	while (curr != stack->head)
	{
		if (curr->num < 0)
			return (i);
		++i;
		curr = curr->next;
	}
	return (-1);
}

int	find_position(t_stack *stack, int target)
{
	t_node	*curr;
	int		i;

	if (stack->size == 0)
		return (-1);
	curr = stack->head;
	i = 0;
	if (curr->num == target)
		return (i);
	++i;
	curr = curr->next;
	while (curr != stack->head)
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

	if (stack->size == 0)
		return (NULL);
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

	if (stack->size == 0)
		return (NULL);
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

int	find_max(t_node *head, t_node *tail)
{
	int		max;
	t_node	*curr;

	if (head == NULL)
		return (0);
	curr = head;
	max = curr->num;
	while (curr != tail)
	{
		if (curr->num > max)
			max = curr->num;
		curr = curr->next;
	}
	return (max);
}

int	find_min(t_node *head, t_node *tail)
{
	int		min;
	t_node	*curr;

	if (head == NULL)
		return (0);
	curr = head;
	min = curr->num;
	while (curr != tail)
	{
		if (curr->num < min)
			min = curr->num;
		curr = curr->next;
	}
	return (min);
}
