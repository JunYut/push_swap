/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:37:17 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/18 11:47:17 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	swap(t_stack *stack);
void	push(t_stack *stack, int element);
void	pop(t_stack *stack);
void	rotateUp(t_stack *stack);
void	rotateDown(t_stack *stack);
