/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:51:39 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/06 10:56:11 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../src/stack/stack.h"
# include "../src/parser/parser.h"
# include "../src/validation/validation.h"
# include "../src/utils/utils.h"

void    sort(t_stack *A, t_stack *B);
void	sort_three(t_stack *A);
void	sort_five(t_stack *A, t_stack *B);
void	sort_hundred(t_stack *A, t_stack *B);
void	presort(t_stack *A, t_stack *B);
void	digit_sort(t_stack *A, t_stack *B);
void	push_negatives(t_stack *A, t_stack *B);
int		is_sorted(t_stack *A);

void	rot_to_min(t_stack *stack);
int		rot_to_negatives(t_stack *stack);
void	rot_to_digit_tier(t_stack *stack, int tier);
void	fast_rotate(t_stack *stack, int pos);

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

#endif
