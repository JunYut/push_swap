/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:52:37 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/27 15:37:42 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*A;
	t_stack	*B;
	char	**strs;

	strs = argv + 1;
	if (argc == 2)
	{
		if (argv[1][0] == 0)
			return (0);
		strs = ft_split(argv[1], ' ');
	}
	input_validation(count_strs(strs), strs);
	A = parser(count_strs(strs), strs);
	dup_in_stack(A);
	B = new_stack();
	// console_log("Before:");	// debug
	// console_log("_________________________");		// debug
	// print_stack(A, "A");		// debug1
	// console_log("_________________________");		// debug
	if (!is_sorted(A, 1))
	{
		quarter_sort(A, B);
		select_sort(A, B);
	}
	// console_log("\nAfter:");	// debug
	// console_log("_________________________");		// debug
	print_stack(A, "A");	// debug1
	// console_log("_________________________");		// debug
	// sorted_rate(A, 1);	// debug
	free_stack(A);
	free_stack(B);
	if (argc == 2)
		free_strs(&strs);
	return (0);
}
