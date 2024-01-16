/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:52:37 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/16 11:45:05 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	argc_validation(int argc);

int	main(int argc, char *argv[])
{
	t_node	*head;

	argc_validation(argc);
	head = parser(argc, argv);
}

void	argc_validation(int argc)
{
	if (argc == 1)
		exit(EXIT_FAILURE);
}
