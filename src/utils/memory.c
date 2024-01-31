/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:56:42 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/31 12:59:19 by tjun-yu          ###   ########.fr       */
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
		exit(EXIT_FAILURE);
	}
	return (ptr);
}

/**
 * @brief Custom free function that provides insight into memory free failures.
 * 		  This function will terminate the program once the free fails.
 *
 * @param ptr A pointer to the memory chunk to free.
 * @param func The name of the function where the memory free is performed.
 */
void	c_free(void *ptr, const char *func)
{
	if (ptr == NULL)
	{
		write(1, func, ft_strlen(func));
		write(1, ": Memory free failed\n", 22);
		exit(EXIT_FAILURE);
	}
	free(ptr);
}

void	free_strs(char **strs)
{
	int	i;

	i = -1;
	while (strs[++i] != 0)
		c_free(strs[i], "free_strs");
	c_free(strs, "free_strs");
}
