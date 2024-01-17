/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:38:11 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/17 10:28:20 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	free_stack(t_node *stack)
{
	t_node	*current;
	t_node	*temp;

	if (is_empty(stack, "free_stack"))
		return ;
	current = stack;
	while (current->next != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}

void	print_stack(t_node *stack)
{
	t_node	*current;

	if (is_empty(stack, "print_stack"))
		return ;
	current = stack;
	while (current != NULL)
	{
		console_log("%d", current->num);
		current = current->next;
	}
}

int	is_singleton(t_node *stack, const char *func)
{
	if (!is_empty(stack, "is_singleton") && stack->next != NULL)
		return (0);
	console_log("%s: is singleton stack", func);
	return (1);
}

int	is_empty(t_node *stack, const char *func)
{
	if (stack == NULL)
	{
		console_log("%s: is empty stack", func);
		return (1);
	}
	return (0);
}

t_node	*new_stack(void)
{
	t_node	*stack;

	stack = (t_node *)c_malloc(sizeof(t_node), "new_stack");
	stack->num = 0;
	stack->next = NULL;
	return (stack);
}
