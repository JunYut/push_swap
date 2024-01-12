/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:04:38 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/12 11:11:56 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <stdlib.h>
# include <stddef.h>
# include "../utils/utils.h"

typedef struct s_node
{
	int				num;
	struct s_node	*next;
}	t_node;

void	swap(t_node *stack);
void	push(t_node *stack, int element);
void	pop(t_node *stack);
void	rotate_up(t_node *stack);
void	rotate_down(t_node *stack);

void	free_stack(t_node *stack);
void	print_stack(t_node *stack);
int		is_singleton(t_node *stack, const char *func);
int		is_empty(t_node *stack, const char *func);
t_node	*new_stack(void);

#endif