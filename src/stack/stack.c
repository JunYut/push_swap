/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:38:11 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/23 15:00:44 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	free_stack(t_stack *stack)	// possible cause of memory leak
{
	t_node	*current;
	t_node	*temp;

	if (!is_empty(stack, "free_stack"))
	{
		current = stack->head;
		while (current->next != stack->tail)
		{
			temp = current->next;
			free(current);
			current = temp;
		}
	}
	free(stack);
}

void	print_stack(t_stack *stack)
{
	t_node	*current;

	if (is_empty(stack, "print_stack"))
		return ;
	current = stack->head;
	while (current != stack->tail)
	{
		console_log("%d", current->num);
		current = current->next;
	}
}

size_t	calc_range(t_stack *stack)
{
	int		max;
	int		min;
	t_node	*current;

	max = stack->head->num;
	min = stack->head->num;
	current = stack->head;
	while (current != stack->tail)
	{
		if (current->num > max)
			max = current->num;
		if (current->num < min)
			min = current->num;
		current = current->next;
	}
	return (max - min);
}

int	is_empty(t_stack *stack, const char *func)
{
	if (stack->head != NULL)
		return (0);
	console_log("%s: is empty stack", func);
	return (1);
}

/**
 * @brief This function returns an empty stack
 *
 * @return t_stack* a stack with every data set to 0
 */
t_stack	*new_stack(void)
{
	t_stack	*stack;

	stack = (t_stack *)c_malloc(sizeof(t_stack), "new_stack");
	stack->head = NULL;
	stack->tail = NULL;
	stack->size = 0;
	stack->range = 0;
	return (stack);
}
