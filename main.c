/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:52:37 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/20 14:29:53 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*A;
	t_stack	*B;
	char	**strs;
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
		// digit_sort(A, B);
		// sort(A, B);
		// select_sort(A, B);
		// bubble_sort(A, B);
		insert_sort(A, B);
	}
	else
		// console_log("Already sorted");			// debug
	console_log("\nAfter:");	// debug
	console_log("_________________________");		// debug
	print_stack(A, "A");		// debug
	console_log("_________________________");		// debug
	if (is_sorted(A, 1))	// debug
		console_log("OK");		// debug
	else				// debug
		console_log("KO");		// debug
	free_stack(A);
	free_stack(B);
	if (argc == 2)
		free_strs(&strs);
	return (0);
}
