/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:37:17 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/11 14:53:01 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	swap(t_node *stack);
void	push(t_node *stack, int element);
void	pop(t_node *stack);
void	rotateUp(t_node *stack);
void	rotateDown(t_node *stack);
