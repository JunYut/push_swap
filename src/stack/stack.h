/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:04:38 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/23 10:52:33 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include "../../includes/push_swap.h"
# include <stdlib.h>
# include <stddef.h>

typedef struct s_node
{
	int				num;
	size_t			digits;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	t_node	*tail;
	size_t	size;
	size_t	range;
}	t_stack;

void	swap(t_stack *stack);
void	push(t_stack *stack, int element);
void	pop(t_stack *stack);
void	rotate_up(t_stack *stack);
void	rotate_down(t_stack *stack);

void	free_stack(t_stack *stack);
size_t	calc_range(t_stack *stack);
void	print_stack(t_stack *stack);
int		is_empty(t_stack *stack, const char *func);
t_stack	*new_stack(void);

size_t	count_digits(long num);

#endif