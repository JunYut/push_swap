/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:04:38 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/19 23:17:11 by we               ###   ########.fr       */
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
long	pop(t_stack *stack);
void	rotate_up(t_stack *stack);
void	rotate_down(t_stack *stack);

int		find_smaller(t_stack *stack, int target);
int		find_unsorted(t_stack *stack);
int		find_digit(t_stack *stack, int digit);
int		find_negative(t_stack *stack);
int		find_position(t_stack *stack, int target);
size_t	calc_range(t_stack *stack);
t_node	*find_max_node(t_stack *stack);
t_node	*find_min_node(t_stack *stack);
void	print_stack(t_stack *stack, const char *name);
int		is_empty(t_stack *stack, const char *func);
void	free_stack(t_stack *stack);
t_stack	*new_stack(void);

#endif
