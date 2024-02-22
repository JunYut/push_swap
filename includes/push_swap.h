/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:51:39 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/22 19:08:49 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../src/stack/stack.h"
# include "../src/parser/parser.h"
# include "../src/validation/validation.h"
# include "../src/utils/utils.h"

void	mid_sort(t_stack *A, t_stack *B);
void	mid_sort_a0(t_stack *A, t_stack *B);
void	mid_sort_a(t_stack *A, t_stack *B);
void	mid_sort_b(t_stack *B, t_stack *A);

void	select_sort(t_stack *A, t_stack *B);
void	select_sort1(t_stack *A, t_stack *B);
void	select_sort_B(t_stack *A, t_stack *B, int chunck);
void	insert_sort(t_stack *A, t_stack *B);
void	insert_sort1(t_stack *A, t_stack *B);

void	sort_stack_A(t_stack *A, t_stack *B);
void	sort_stack_B(t_stack *B, t_stack *A);

int		is_sorted(t_stack *A, int direction);

void	sort_three_A(t_stack *A);
void	sort_five_A(t_stack *A, t_stack *B);
void	sort_hundred_A(t_stack *A, t_stack *B);
void	sort_three_B(t_stack *B);
void	sort_five_B(t_stack *B, t_stack *A);
void	sort_hundred_B(t_stack *B, t_stack *A);

void	pop_swap(int pos, t_stack *A, t_stack *B);
void	rotate_swap(int dist, t_stack *stack);

void	rot_to_max(t_stack *stack);
void	rot_to_min(t_stack *stack);
int		rot_to_negatives(t_stack *stack);
int		fast_rotate(t_stack *stack, int pos);

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
