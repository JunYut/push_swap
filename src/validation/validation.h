/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:46:25 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/17 14:00:27 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATION_H
# define VALIDATION_H

# include "../../includes/push_swap.h"
# include <stdlib.h>

void	input_validation(int argc, char *argv[]);

void	validator(char *argv[], int (*checker)(const char *num));

int		isnum(const char *str);
int		inrange(const char *num);

#endif // VALIDATION_H
