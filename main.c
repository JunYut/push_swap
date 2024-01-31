/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:52:37 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/31 11:11:31 by tjun-yu          ###   ########.fr       */
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
	A = parser(count_strs(strs), strs);
	B = new_stack();
	console_log("Before:"); print_stack(A);		// debug
	if (!is_sorted(A))
		sort(A, B);
	else
		console_log("Already sorted");			// debug
	console_log("After:"); print_stack(A);		// debug
	free_stack(A);
	free_stack(B);
	free_strs(strs);
	return (0);
}
