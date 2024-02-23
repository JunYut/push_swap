/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:52:37 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/23 14:05:33 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*A;
	t_stack	*B;
	char	**strs;
	size_t	size;
	strs = argv;
	if (argc == 2)
		strs = ft_split(argv[1], ' ');
	input_validation(count_strs(strs), strs);
	input_validation(count_strs(strs), strs);
	A = parser(count_strs(strs), strs, argc);
	B = new_stack();
	console_log("Before:");	// debug
	console_log("_________________________");		// debug
	print_stack(A, "A");		// debug
	console_log("_________________________");		// debug
	if (!is_sorted(A, 1))
	{
		// mid_sort_a(A, B);
		// size = B->size;
		// for (size_t i = 0; i < size; i++)
		// 	pa(A, B);

		// mid_sort_a0(A, B); mid_sort_b(B, A); insert_sort(A, B);

		// mid_sort_a0(A, B); mid_sort_b(B, A); select_sort(A, B);

		mid_sort_a0(A, B); mid_sort_b(B, A);

		(void)size;
	}
	else
		// console_log("Already sorted");			// debug
	console_log("\nAfter:");	// debug
	console_log("_________________________");		// debug
	print_stack(A, "A");	print_stack(B, "B");		// debug
	console_log("_________________________");		// debug
	sorted_rate(A, 1);
	free_stack(A);
	free_stack(B);
	if (argc == 2)
		free_strs(&strs);
	return (0);
}
