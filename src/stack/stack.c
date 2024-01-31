/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:38:11 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/31 14:03:14 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

/**
 * @note This function is tested
 */
void	free_stack(t_stack *stack)
{
	while (!is_empty(stack, "free_stack"))
		pop(stack);
	c_free(stack, "free_stack");
}

/**
 * @note This function is tested
 */
void	print_stack(t_stack *stack)
{
	t_node	*current;

	console_log("STACK [size: %d, range: %d]", stack->size, stack->range);
	if (is_empty(stack, "print_stack"))
		return ;
	current = stack->head;
	console_log("element: %d | digits: %d", current->num, current->digits);
	current = current->next;
	while (current != stack->head)
	{
		console_log("element: %d | digits: %d", current->num, current->digits);
		current = current->next;
	}
	console_log("");
}

/**
 * @note This function is tested
 */
size_t	calc_range(t_stack *stack)
{
	int		max;
	int		min;
	t_node	*current;

	if (is_empty(stack, "calc_range"))
		return (0);
	max = stack->head->num;
	min = stack->head->num;
	current = stack->head;
	if (current->num > max)
		max = current->num;
	if (current->num < min)
		min = current->num;
	current = current->next;
	while (current != stack->head)
	{
		if (current->num > max)
			max = current->num;
		if (current->num < min)
			min = current->num;
		current = current->next;
	}
	return (max - min);
}

/**
 * @note This function is tested
 */
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
