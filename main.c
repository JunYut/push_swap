/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:52:37 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/19 14:04:58 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

// int	main(int argc, char *argv[])
// {
// 	t_stack	*A;

// 	input_validation(argc, argv);
// 	A = parser(argc, argv);
// 	free_stack(A);
// }

int main()
{
	t_stack *stack = new_stack();

	for (int i = 0; i < 10; i++)
	{
		push(stack, i);
		print_stack(stack);
	}
	free_stack(stack);
}
