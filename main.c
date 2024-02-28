/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:52:37 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/28 14:00:19 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	char	**strs;

	strs = argv + 1;
	if (argc == 2)
	{
		if (argv[1][0] == 0)
			return (0);
		strs = ft_split(argv[1], ' ');
	}
	input_validation(count_strs(strs), strs);
	a = parser(count_strs(strs), strs);
	dup_in_stack(a);
	b = new_stack();
	if (!is_sorted(a, 1))
		sort(a, b);
	free_stack(a);
	free_stack(b);
	if (argc == 2)
		free_strs(&strs);
	return (0);
}
