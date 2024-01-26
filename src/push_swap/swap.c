/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:21:18 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/26 10:25:28 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sa(t_stack *A)
{
	console_log("sa");
	swap(A);
}

void	sb(t_stack *B)
{
	console_log("sb");
	swap(B);
}

void	ss(t_stack *A, t_stack *B)
{
	console_log("ss");
	swap(A);
	swap(B);
}
