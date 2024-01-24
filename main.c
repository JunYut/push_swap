/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:52:37 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/24 14:22:46 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

/* main fr*/
// int	main(int argc, char *argv[])
// {
// 	t_stack	*A;

// 	input_validation(argc, argv);
// 	A = parser(argc, argv);
// 	free_stack(A);
// }


int	TEST(char *test);
void	debug_swap(t_stack *stack);

/**
 * @test void push(t_stack *stack, int element)
 * @test void pop(t_stack *stack)
*/
int main()
{
	char	*test = "swap";
	t_stack *stack = new_stack();

	switch (TEST(test))
	{
		case 1:
			console_log("PUSH TEST:");
			console_log("__________________________________________");
			for (int i = 1; i <= 10; i++)
			{
				push(stack, i);
				print_stack(stack);
			}
			break;

		case 2:
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
			break;

		case 3:
			console_log("SWAP TEST:");
			console_log("__________________________________________");
			for (int i = 1; i <= 10; i++)
				push(stack, i);
			print_stack(stack);
			debug_swap(stack);
			swap(stack);
			debug_swap(stack);
			print_stack(stack);
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

void	debug_swap(t_stack *stack)
{
	console_log("head: %d", stack->head->num);
	console_log("second: %d", stack->head->next->num);
	console_log("");
}
