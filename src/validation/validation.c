/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:51:11 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/17 12:02:14 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validation.h"

/*
	This function validates the arguments and prints an error message when
	an argument is found invalid.

	Errors:
	- non-numbers & non-integers (float, doubles)
	- greater than INT_MAX or smaller than INT_MIN
	- duplicates
*/
void	input_validation(int argc, char *argv[])
{
	if (argc == 1)
		exit(EXIT_FAILURE);
	int_validation(argv);
}

void	int_validation(char *argv[])
{
	size_t	size;
	int		i;

	size = sizeof(argv) / sizeof(argv[0]);
	i  = -1;
	while (++i < size)
	{
		if (!isnum(argv[i]))
		{
			console_log("Error");
			exit(EXIT_FAILURE);
		}
	}
}
