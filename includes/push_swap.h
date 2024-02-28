/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:51:39 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/02/28 11:08:26 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../src/stack/stack.h"
# include "../src/parser/parser.h"
# include "../src/validation/validation.h"
# include "../src/utils/utils.h"
# include <stdio.h>

typedef struct s_node t_node;

void	sort(t_stack *A, t_stack *B);
void	sort_three_a(t_stack *A);
void	sort_five_a(t_stack *A, t_stack *B);
void	sort_three_b(t_stack *B);
void	sort_five_b(t_stack *B, t_stack *A);

void	quarter_sort(t_stack *A, t_stack *B);
void	quarter_sort_a(t_stack *A, t_stack *B);
void	quarter_sort_b(t_stack *B, t_stack *A);

void	select_sort(t_stack *A, t_stack *B);

void	sort_stack_A(t_stack *A, t_stack *B);
void	sort_stack_B(t_stack *B, t_stack *A);

int		is_sorted(t_stack *A, int direction);
int		is_sorted1(t_node *head, t_node *tail, int direction);
int		sorted_rate(t_stack *A, int direction);

void	sort_hundred_A(t_stack *A, t_stack *B);
void	sort_hundred_B(t_stack *B, t_stack *A);

void	pop_swap(int pos, t_stack *A, t_stack *B);
void	rotate_swap(int dist, t_stack *stack);

void	rot_to_max_a(t_stack *A);
void	rot_to_max_b(t_stack *B);
void	rot_to_min_a(t_stack *A);
void	rot_to_min_b(t_stack *B);
int		fast_rotate_a(t_stack *A, int pos);
int		fast_rotate_b(t_stack *B, int pos);

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
