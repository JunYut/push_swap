/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:04:38 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/18 14:12:22 by tjun-yu          ###   ########.fr       */
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
	size_t			digits;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	size_t	size;
	size_t	range;
}	t_stack;

void	swap(t_stack *stack);
void	push(t_stack *stack, int element);
void	pop(t_stack *stack);
void	rotate_up(t_stack *stack);
void	rotate_down(t_stack *stack);

void	free_stack(t_stack *stack);
void	print_stack(t_stack *stack);
int		is_singleton(t_stack *stack, const char *func);
int		is_empty(t_stack *stack, const char *func);
t_stack	*new_stack(void);

#endif