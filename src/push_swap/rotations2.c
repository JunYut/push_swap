/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:08:47 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/28 11:09:08 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rot_to_max_a(t_stack *A)
{
	fast_rotate_a(A, find_position(A, find_max_node(A)->num));
}

void	rot_to_max_b(t_stack *B)
{
	fast_rotate_b(B, find_position(B, find_max_node(B)->num));
}

void	rot_to_min_a(t_stack *A)
{
	fast_rotate_a(A, find_position(A, find_min_node(A)->num));
}

void	rot_to_min_b(t_stack *B)
{
	fast_rotate_b(B, find_position(B, find_min_node(B)->num));
}
