/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:51:11 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/27 11:42:28 by tjun-yu          ###   ########.fr       */
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
void	input_validation(int argc, char *argv[]) // refactor this function
{
	validator(argv, isnum, argc);
	validator(argv, is_int, argc);
	duplicate_checker(argv, argc);
}

void	validator(char *argv[], int (*checker)(const char *num), int argc)
{
	int	i;

	i = -1;
	while (++i < argc)
	{
		if (!(*checker)(argv[i]))
		{
			write(1, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
	}
}

void	duplicate_checker(char *argv[], int argc)
{
	int	i;
	int	j;

	i = -1;
	while (++i < argc - 1)
	{
		j = i;
		while (++j < argc)
		{
			if (same_str(argv[i], argv[j]))
			{
				write(1, "Error\n", 6);
				exit(EXIT_FAILURE);
			}
		}
	}
}
