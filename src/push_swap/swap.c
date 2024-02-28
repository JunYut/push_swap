/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:21:18 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/28 14:52:28 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sa(t_stack *A)
{
	write(1, "sa\n", 3);
	swap(A);
}

void	sb(t_stack *B)
{
	write(1, "sb\n", 3);
	swap(B);
}

void	ss(t_stack *A, t_stack *B)
{
	write(1, "ss\n", 3);
	swap(A);
	swap(B);
}
