# include	"test.h"

void    PUSH_TEST(t_stack *stack)
{
	console_log("PUSH TEST:");
	console_log("__________________________________________");
	for (int i = 1; i <= 10; i++)
	{
		push(stack, i);
		print_stack(stack);
	}
}

void	POP_TEST(t_stack *stack)
{
	console_log("POP TEST:");
	console_log("__________________________________________");
	for (int i = 1; i <= 10; i++)
		push(stack, i);
	for (int i = 0; i < 10; i++)
	{
		print_stack(stack);
		pop(stack);
	}
	pop(stack);
}

void	SWAP_TEST(t_stack *stack)
{
	console_log("SWAP TEST:");
	console_log("__________________________________________");
	for (int i = 1; i <= 10; i++)
		push(stack, i);
	print_stack(stack);
	DEBUG_SWAP(stack);
	swap(stack);
	DEBUG_SWAP(stack);
	print_stack(stack);
}

void	ROTATE_TEST(t_stack *stack)
{
	console_log("ROTATE TEST:");
	console_log("__________________________________________");
	for (int i = 1; i <= 10; i++)
		push(stack, i);
	print_stack(stack);
	rotate_up(stack);
	print_stack(stack);
	rotate_down(stack);
	print_stack(stack);
	rotate_down(stack);
	print_stack(stack);
}
