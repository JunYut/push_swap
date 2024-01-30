/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:57:57 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/30 14:24:45 by tjun-yu          ###   ########.fr       */
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

/**
 * @brief
 *
 * @param A
 * @attention IMPLEMENT 'max()' AND 'min()' FUNCTIONS
 */
static void	sort_three(t_stack *A)
{
	console_log("sort_three");		// debug
	if (A->head->num == max(A))
		ra(A);
	else if (A->head->next->num == max(A))
		rra(A);
	if (A->head->num > A->head->next->num)
		sa(A);
}

static void	sort_five(t_stack *A, t_stack *B)
{
	console_log("sort_five");		// debug
	print_stack(A);		// debug
	print_stack(B);		// debug
}
