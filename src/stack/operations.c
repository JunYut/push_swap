/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:37:17 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/24 15:08:40 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	swap(t_stack *stack)
{
	t_node	*second;

	if (is_empty(stack, "swap") || stack->size == 1)
		return ;
	second = stack->head;
	stack->head = stack->head->next;
	second->next = stack->head->next;
	stack->head->next = second;
	stack->tail->next = stack->head;
}

void	push(t_stack *stack, int element)
{
	t_node	*new_node;

	new_node = (t_node *)c_malloc(sizeof(t_node), "push");
	new_node->num = element;
	new_node->digits = count_digits(element);
	if (is_empty(stack, "push"))
	{
		new_node->next = new_node;
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
	if (stack->size == 1)
	{
		free(stack->head);
		stack->head = NULL;
		stack->tail = NULL;
		stack->size = 0;
		stack->range = 0;
		return ;
	}
	temp = stack->head;
	stack->head = stack->head->next;
	stack->tail->next = stack->head;
	free(temp);
	stack->size -= 1;
	stack->range = calc_range(stack);
}

void	rotate_up(t_stack *stack)
{
	t_node	*temp;

	if (is_empty(stack, "rotateUp") || stack->size == 1)
		return ;
	temp = stack->head;
	stack->head = stack->head->next;
	stack->tail = temp;
}

void	rotate_down(t_stack *stack)
{
	t_node	*temp;

	if (is_empty(stack, "rotateUp") || stack->size == 1)
		return ;
	temp = stack->head;
	while (temp->next != stack->tail)
		temp = temp->next;
	stack->head = stack->tail;
	stack->tail = temp;
	stack->tail->next = stack->head;
}
