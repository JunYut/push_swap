/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:50:21 by we                #+#    #+#             */
/*   Updated: 2024/02/26 15:57:39 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	find_q75(t_stack *stack, int i, int j)
{
	t_node	*ptr;
	t_node	*current;
	int		s;
	int		l;

	ptr = stack->head;
	while (++i < (int)(stack->size))
	{
		current = stack->head;
		s = 0;
		l = 0;
		j = -1;
		while (++j < (int)(stack->size))
		{
			if (ptr->num < current->num)
				++s;
			if (ptr->num > current->num)
				++l;
			current = current->next;
		}
		// console_log("ptr->num: %d, s: %d, l: %d", ptr->num, s, l);	// debug
		if (s == 3 * l || s ==  3 * l - 1 || s == 3 * l - 2 || s == 3 * l - 3)
			return (ptr->num);
		ptr = ptr->next;
	}
	return (-2147483648);
}

int	find_q25(t_stack *stack, int i, int j)
{
	t_node	*ptr;
	t_node	*current;
	int		s;
	int		l;

	ptr = stack->head;
	while (++i < (int)(stack->size))
	{
		current = stack->head;
		s = 0;
		l = 0;
		j = -1;
		while (++j < (int)(stack->size))
		{
			if (ptr->num < current->num)
				++s;
			if (ptr->num > current->num)
				++l;
			current = current->next;
		}
		// console_log("ptr->num: %d, s: %d, l: %d", ptr->num, s, l);	// debug
		if (3 * s == l || 3 * s - 1 == l || 3 * s - 2 == l || 3 * s - 3 == l)
			return (ptr->num);
		ptr = ptr->next;
	}
	return (-2147483648);
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
