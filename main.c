/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:52:37 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/24 12:45:06 by tjun-yu          ###   ########.fr       */
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

/**
 * @test void push(t_stack *stack, int element)
 * @test void pop(t_stack *stack)
*/
int main()
{
	char	*test = "PUSH";
	t_stack *stack = new_stack();

	switch (TEST(test))
	{
	case 1:
		console_log("PUSH TEST:");
		console_log("__________________________________________");
		for (int i = 1; i <= 10; i++)
		{
			push(stack, i);
			print_stack(stack);	console_log("");
		}
		break;
	case 2:
		console_log("POP TEST:");
		console_log("__________________________________________");
		for (int i = 1; i <= 10; i++)
		{
			push(stack, i);
			print_stack(stack);	console_log("");
		}
		for (int i = 0; i < 10; i++)
		{
			print_stack(stack);	console_log("");
			pop(stack);
		}
		break;

	default:
		break;
	}

	free_stack(stack);
}

int	TEST(char *test)
{
	if (same_str("PUSH", test))
		return (1);
	if (same_str("POP", test))
		return (2);
	return (0);
}
