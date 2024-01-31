/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:56:42 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/31 14:25:23 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

/**
 * @brief Custom malloc function that provides insight into memory allocation
 * 		  failures. This function will terminate the program once the
 * 		  allocation fails.
 *
 * @param size The amount of memory to allocate.
 * @param func The name of the function where the memory allocation is
 * 		  performed.
 * @return A pointer to the allocated memory chunk.
 */
void	*c_malloc(size_t size, const char *func)
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr == NULL)
	{
		write(1, func, ft_strlen(func));
		write(1, ": Memory allocation failed\n", 28);
		free(ptr);
		ptr = NULL;
		exit(EXIT_FAILURE);
	}
	return (ptr);
}

void	free_strs(char **strs)
{
	int	i;

	i = -1;
	while (strs[++i] != 0)
	{
		free(strs[i]);
		strs[i] = NULL;
	}
	free(strs);
}
