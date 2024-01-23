/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:52:37 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/23 14:25:50 by tjun-yu          ###   ########.fr       */
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

/**
 * @test void push(t_stack *stack, int element)
 * @test void push(t_stack *stack)
*/
int main()
{
	console_log("PUSH TEST:");
	console_log("__________________________________________");
	t_stack *stack = new_stack();
	for (int i = 0; i < 10; i++)
	{
		push(stack, i);
		print_stack(stack);	console_log("");
	}
	free_stack(stack);
}
