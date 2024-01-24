/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:37:17 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/24 11:17:42 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	swap(t_stack *stack);

void	push(t_stack *stack, int element)
{
	t_node	*new_node;

	new_node = (t_node *)c_malloc(sizeof(t_node), "push");
	new_node->num = element;
	new_node->digits = count_digits(element);
	if (is_empty(stack, "push"))
	{
		new_node->next = NULL;
		stack->head = new_node;
		stack->tail = stack->head;
	}
	else
	{
		new_node->next = stack->head;
		stack->head = new_node;
		stack->tail->next = stack->head;
	}
	stack->size += 1;
	stack->range = calc_range(stack);
}

void	pop(t_stack *stack)
{
	t_node	*temp;

	if (is_empty(stack, "pop"))
		return ;
	temp = stack->head;
	stack->head = stack->head->next;
	stack->tail->next = stack->head;
	free(temp);
	stack->size -= 1;
	stack->range = calc_range(stack);
}

void	rotateUp(t_stack *stack);
void	rotateDown(t_stack *stack);
