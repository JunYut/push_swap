/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:51:39 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/26 10:57:38 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../src/stack/stack.h"
# include "../src/parser/parser.h"
# include "../src/validation/validation.h"
# include "../src/utils/utils.h"

void    sa(t_stack *A);
void    sb(t_stack *B);
void    ss(t_stack *A, t_stack *B);
void    pa(t_stack *A, t_stack *B);
void    pb(t_stack *B, t_stack *A);
void    ra(t_stack *A);
void    rb(t_stack *B);
void    rr(t_stack *A, t_stack *B);
void    rra(t_stack *A);
void    rrb(t_stack *B);
void    rrr(t_stack *A, t_stack *B);

void    sort(t_stack *A, t_stack *B);
int		is_sorted(t_stack *A);

#endif
