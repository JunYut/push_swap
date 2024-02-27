/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:46:25 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/27 13:06:21 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATION_H
# define VALIDATION_H

# include "../../includes/push_swap.h"
# include <stdlib.h>

void	input_validation(int argc, char *argv[]);

void	validator(char *argv[], int (*checker)(const char *num), int argc);
void	duplicate_checker(char *argv[], int argc);
void	dup_in_stack(t_stack *stack);

int		isnum(const char *str);
int		is_int(const char *num);
int		same_str(const char *s1, const char *s2);

#endif // VALIDATION_H
