/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:20:15 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/25 15:20:53 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa(t_stack *A, t_stack *B)
{
	if (B->size == 0)
		return ;
	console_log("pa");
	push(A, pop(B));
}

void	pb(t_stack *B, t_stack *A)
{
	if (A->size == 0)
		return ;
	console_log("pb");
	push(B, pop(A));
}
