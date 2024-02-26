/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:52:37 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/26 14:17:10 by we               ###   ########.fr       */
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
		console_log("Q25: %d", find_q25(A, -1, -1));	// debug
		console_log("Q75: %d", find_q75(A, -1, -1));	// debug
		
		// mid_sort(A, B);

		// mid_sort_a(A, B);

		// mid_sort(A, B); select_sort(A, B);

		// mid_sort(A, B); insert_sort(A, B);

		// int half = (A->size + A->size % 2) / 2;
		// mid_sort(A, B);
		// while (A->size > (size_t)half)
		// 	pb(B, A);
		// select_sort(A, B);
		// select_sort_B(A, B, B->size);

		// mid_sort(A, B);
		// select_sort_half(A, B);
		// clean_up(A, B, A->size);
		// while (B->size > 0)
		// 	pa(A, B);
		// rot_to_min(A);

		// mid_sort(A, B); clean_up(A, B, A->size);

		(void)size;
	}
	else
		// console_log("Already sorted");			// debug
	console_log("\nAfter:");	// debug
	console_log("_________________________");		// debug
	print_stack(A, "A");	// debug
	// print_stack(B, "B");	// debug
	console_log("_________________________");		// debug
	sorted_rate(A, 1);
	free_stack(A);
	free_stack(B);
	if (argc == 2)
		free_strs(&strs);
	return (0);
}
