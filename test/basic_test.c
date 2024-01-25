# include	"test.h"

void    PUSH_TEST()
{
	console_log("PUSH TEST:");
	console_log("__________________________________________");

	t_stack *stack = new_stack();
	for (int i = 1; i <= 10; i++)
	{
		push(stack, i);
		print_stack(stack);
	}
	free_stack(stack);
}

void	POP_TEST()
{
	console_log("POP TEST:");
	console_log("__________________________________________");

	t_stack *stack = new_stack();
	for (int i = 1; i <= 10; i++)
		push(stack, i);
	for (int i = 0; i < 10; i++)
	{
		console_log("popped: %d", pop(stack));
		print_stack(stack);
	}
	pop(stack);
	free_stack(stack);
}

void	SWAP_TEST()
{
	console_log("SWAP TEST:");
	console_log("__________________________________________");

	t_stack *stack = new_stack();
	for (int i = 1; i <= 10; i++)
		push(stack, i);
	print_stack(stack);
	DEBUG_SWAP(stack);
	swap(stack);
	DEBUG_SWAP(stack);
	print_stack(stack);
	free_stack(stack);
}

void	ROTATE_TEST()
{
	console_log("ROTATE TEST:");
	console_log("__________________________________________");

	t_stack *stack = new_stack();
	for (int i = 1; i <= 10; i++)
		push(stack, i);
	print_stack(stack);
	rotate_up(stack);
	print_stack(stack);
	rotate_down(stack);
	print_stack(stack);
	rotate_down(stack);
	print_stack(stack);
	free_stack(stack);
}
