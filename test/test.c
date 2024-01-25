/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:52:37 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/25 10:47:53 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "test.h"

int main()
{
	char	*test = "rotate";
	t_stack *A = new_stack();

	switch (TEST(test))
	{
		case 1:
			PUSH_TEST(A);
			break;
		case 2:
			POP_TEST(A);
			break;
		case 3:
			SWAP_TEST(A);
			break;
		case 4:
			ROTATE_TEST(A);
			break;
		default:
			break;
	}

	free_stack(A);
}

int	TEST(char *test)
{
	if (same_str("push", test))
		return (1);
	if (same_str("pop", test))
		return (2);
	if (same_str("swap", test))
		return (3);
	if (same_str("rotate", test))
		return (4);
	return (0);
}

void	ALL_TEST(t_stack *A, t_stack *B)	// incomplete
{
	PUSH_TEST(A);
	POP_TEST(A);
	SWAP_TEST(A);
	ROTATE_TEST(A);
}

void	DEBUG_SWAP(t_stack *stack)
{
	console_log("head: %d", stack->head->num);
	console_log("second: %d", stack->head->next->num);
	console_log("");
}
