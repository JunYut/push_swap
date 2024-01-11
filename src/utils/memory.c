/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:56:42 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/11 15:46:43 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

/**
 * @brief Custom malloc function that provides insight into memory allocation
 * 		  failures.
 *
 * This function is used to allocate a specified amount of memory and provides
 * information about the function where the allocation fails.
 *
 * @param size The amount of memory to allocate.
 * @param func The name of the function where the memory allocation is performed.
 * @return A pointer to the allocated memory chunk.
 */
void	*c_malloc(size_t size, const char *func)
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr == NULL)
	{
		consoleLog(func);
		consoleLog(": Memory allocation failed\n");
		free(ptr);
		exit(EXIT_FAILURE);
	}
	return (ptr);
}
