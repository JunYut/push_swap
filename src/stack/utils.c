/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:38:11 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/18 14:59:31 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	free_stack(t_stack *stack)
{
	t_node	*current;
	t_node	*temp;

	if (is_empty(stack, "free_stack"))
		return ;
	current = stack->head;
	while (current->next != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}

void	print_stack(t_stack *stack)
{
	t_node	*current;

	if (is_empty(stack, "print_stack"))
		return ;
	current = stack->head;
	while (current != NULL)
	{
		console_log("%d", current->num);
		current = current->next;
	}
}

int	is_singleton(t_stack *stack, const char *func)
{
	if (stack->size != 1)
		return (0);
	console_log("%s: is singleton stack", func);
	return (1);
}

int	is_empty(t_stack *stack, const char *func)
{
	if (stack->size == 0)
	{
		console_log("%s: is empty stack", func);
		return (1);
	}
	return (0);
}

/**
 * @brief This function returns a stack in an empty state
 *
 * @return t_stack* a stack with every data set to 0
 */
t_stack	*new_stack(void)
{
	t_stack	*stack;

	stack = (t_stack *)c_malloc(sizeof(t_stack), "new_stack");
	stack->head = NULL;
	stack->size = 0;
	stack->range = 0;
	return (stack);
}
