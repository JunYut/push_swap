/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:46:25 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/17 12:21:58 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATION_H
# define VALIDATION_H

# include "../../includes/push_swap.h"
# include <stdlib.h>

void	input_validation(int argc, char *argv[]);

void	int_validation(char *argv[]);

int		isnum(const char *str);

#endif // VALIDATION_H
