/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:58:22 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/31 15:02:31 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	max_node(t_stack *stack)
{
	int		max;
	t_node	*curr;

	curr = stack->head;
	max = curr->num;
	while (curr != NULL)
	{
		if (curr->num > max)
			max = curr->num;
		curr = curr->next;
	}
	return (max);
}
