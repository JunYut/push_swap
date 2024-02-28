/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:38:59 by we                #+#    #+#             */
/*   Updated: 2024/02/28 12:55:39 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	find_unsorted(t_stack *stack, int direction)
{
	t_node	*curr;
	int		pos;
	int		i;

	curr = stack->head;
	pos = 0;
	i = -1;
	while (++i < (int)(stack->size - 1))
	{
		if (direction == 1 && (curr == find_max_node(stack)
				&& curr->next == find_min_node(stack)))
			return (-1);
		if (direction == 1 && curr->num > curr->next->num)
			return (pos);
		if (direction == -1 && (curr == find_min_node(stack)
				&& curr->next == find_max_node(stack)))
			return (-1);
		if (direction == -1 && curr->num < curr->next->num)
			return (pos);
		curr = curr->next;
		++pos;
	}
	return (-1);
}

long	find_smaller(t_stack *stack, int target)
{
	t_node	*current;
	int		i;

	current = stack->head;
	i = -1;
	while (++i < (int)(stack->size))
	{
		if (current->num <= target)
			return (current->num);
		current = current->next;
	}
	return (LONG_MIN);
}

long	find_larger(t_stack *stack, int target)
{
	t_node	*current;
	int		i;

	current = stack->head;
	i = -1;
	while (++i < (int)(stack->size))
	{
		if (current->num >= target)
			return (current->num);
		current = current->next;
	}
	return (LONG_MIN);
}

// please set i & j to -1 before calling this function
int	find_mid(t_stack *stack, int i, int j)
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
		if (s == l || s == l - 1 || s == l + 1)
			return (ptr->num);
		ptr = ptr->next;
	}
	return (-2147483648);
}
