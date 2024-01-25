/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:52:37 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/01/25 14:49:53 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "test.h"
# include <stdio.h>

int main(int argc, char **argv)
{
	char* test = argv[1];

	if (argc < 2)
		test = "all";
	switch (TEST(test))
	{
		case 1:
			PUSH_TEST();
			break;
		case 2:
			POP_TEST();
			break;
		case 3:
			SWAP_TEST();
			break;
		case 4:
			ROTATE_TEST();
			break;
		case 5:
			PA_PB_TEST();
			break;
		case 6:
			SA_SB_SS_TEST();
			break;
		case 7:
			RA_RB_RR_TEST();
			break;
		default:
			console_log("invalid test name");
			// ALL_TEST();
			break;
	}

	return (0);
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
	if (same_str("papb", test))
		return (5);
	if (same_str("sasbss", test))
		return (6);
	if (same_str("rarbrr", test))
		return (7);
	return (0);
}

void	ALL_TEST()	// incomplete
{
	PUSH_TEST();
	POP_TEST();
	SWAP_TEST();
	ROTATE_TEST();
	PA_PB_TEST();
	SA_SB_SS_TEST();
	RA_RB_RR_TEST();
}

void	DEBUG_SWAP(t_stack *stack)
{
	console_log("head: %d", stack->head->num);
	console_log("second: %d", stack->head->next->num);
	console_log("");
}

void	DEBUG()
{
	static int i = 0;

	console_log("DEBUG: %d", i++);
}
