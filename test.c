/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:52:37 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/24 14:39:56 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"


int	    TEST(char *test);
void    PUSH_TEST(t_stack *stack);
void	POP_TEST(t_stack *stack);
void	SWAP_TEST(t_stack *stack);
void	DEBUG_SWAP(t_stack *stack);

int main()
{
	char	*test = "push";
	t_stack *stack = new_stack();

	switch (TEST(test))
	{
		case 1:
			PUSH_TEST(stack);
			break;
		case 2:
			POP_TEST(stack);
			break;
		case 3:
			SWAP_TEST(stack);
			break;
		default:
			break;
	}

	free_stack(stack);
}

int	TEST(char *test)
{
	if (same_str("push", test))
		return (1);
	if (same_str("pop", test))
		return (2);
	if (same_str("swap", test))
		return (3);
	return (0);
}

void    PUSH_TEST(t_stack *stack)
{
	console_log("PUSH TEST:");
	console_log("__________________________________________");
	for (int i = 1; i <= 10; i++)
	{
		push(stack, i);
		print_stack(stack);
	}
}

void	POP_TEST(t_stack *stack)
{
	console_log("POP TEST:");
	console_log("__________________________________________");
	for (int i = 1; i <= 10; i++)
		push(stack, i);
	for (int i = 0; i < 10; i++)
	{
		print_stack(stack);
		pop(stack);
	}
	pop(stack);
}

void	SWAP_TEST(t_stack *stack)
{
	console_log("SWAP TEST:");
	console_log("__________________________________________");
	for (int i = 1; i <= 10; i++)
		push(stack, i);
	print_stack(stack);
	DEBUG_SWAP(stack);
	swap(stack);
	DEBUG_SWAP(stack);
	print_stack(stack);
}

void	DEBUG_SWAP(t_stack *stack)
{
	console_log("head: %d", stack->head->num);
	console_log("second: %d", stack->head->next->num);
	console_log("");
}
