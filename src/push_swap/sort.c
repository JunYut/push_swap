/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:57:57 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/01 15:03:13 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	sort_three(t_stack *A);
static void	sort_five(t_stack *A, t_stack *B);

void	sort(t_stack *A, t_stack *B)
{
	console_log("sorting...");		// debug
	if (A->size == 2)
		sa(A);
	else if (A->size == 3)
		sort_three(A);
	else if (A->size <= 5)
		sort_five(A, B);
	else
		console_log("nothing here"); //sort_hundred(A, B);
}

static void	sort_three(t_stack *A)
{
	console_log("sort_three");		// debug
	if (A->head->num == find_max_node(A)->num)
		ra(A);
	else if (A->head->next->num == find_max_node(A)->num)
		rra(A);
	if (A->head->num > A->head->next->num)
		sa(A);
}

static void	sort_five(t_stack *A, t_stack *B)
{
	console_log("sort_five");		// debug

	rot_to_min(A, find_position(A, find_min_node(A)->num));
	pb(B, A);
	rot_to_min(A, find_position(A, find_min_node(A)->num));
	pb(B, A);
	sort_three(A);
	pa(A, B);
	pa(A, B);
}
