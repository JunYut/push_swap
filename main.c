/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:52:37 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/26 14:27:32 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*A;
	t_stack	*B;

	input_validation(argc, argv);
	A = parser(argc, argv);
	B = new_stack();
	console_log("Before:"); print_stack(A);		// debug
	if (!is_sorted(A))
		sort(A, B);
	else
		console_log("Already sorted");			// debug
	console_log("After:"); print_stack(A);		// debug
	free_stack(A);
	free_stack(B);
	return (0);
}
