/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:38:11 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/11 15:48:15 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	free_stack(t_node *stack);
void	remove_node(t_node *node);
void	print_stack(t_node *stack);
int		is_empty(t_node *stack);

t_node	*new_stack(void)
{
	t_node	*stack;

	stack = (t_node *)c_malloc(sizeof(t_node), "new_stack");
	stack->num = 
	stack->next = NULL;
}
