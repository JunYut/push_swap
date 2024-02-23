/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:29:26 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/23 14:09:07 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * @brief Check if the stack is sorted
 *
 * @param A stack to check
 * @param direction -1 for descending, 1 for ascending
 * @return int 1 if sorted, 0 if not
 */
int	is_sorted(t_stack *A, int direction)
{
	t_node	*current;
	int		i;

	if (A->size <= 1)
		return (1);
	current = A->head;
	i = -1;
	while (++i < (int)A->size - 1)
	{
		if (direction == -1 && current->num < current->next->num)
			return (0);
		else if (direction == 1 && current->num > current->next->num)
			return (0);
		current = current->next;
	}
	return (1);
}

//
int	is_sorted1(t_node *head, t_node *tail, int direction)
{
	t_node *curr;

	if (head == tail)
		return (1);
	curr = head;
	while (curr != tail)
	{
		if (direction == -1 && curr->num < curr->next->num)
			return (0);
		else if (direction == 1 && curr->num > curr->next->num)
			return (0);
		curr = curr->next;
	}
	return (1);
}

// Returns how many numbers are in the correct order
int	sorted_rate(t_stack *A, int direction)
{
	t_node	*curr;
	int		rate;

	if (A->size <= 1)
		return (1);
	curr = A->head;
	rate = A->size - 1;
	while (curr != A->tail)
	{
		if (direction == -1 && curr->num < curr->next->num)
			--rate;
		else if (direction == 1 && curr->num > curr->next->num)
			--rate;
		curr = curr->next;
	}
	console_log("sorted rate: %d/%d", rate, (int)(A->size) - 1);	// debug
	return (rate);
}
