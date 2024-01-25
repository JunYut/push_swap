# include "test.h"

void	PA_PB_TEST()
{
	console_log("PA PB TEST:");
	console_log("__________________________________________");

	t_stack *A = new_stack();
	for (int i = 1; i <= 10; i++)
		push(A, i);
	console_log("A:");	print_stack(A);

	t_stack *B = new_stack();
	for (int i = -1; i >= -10; --i)
		push(B, i);
	console_log("B:");	print_stack(B);

	console_log("--------------------");
	pa(A, B);
	console_log("A:");	print_stack(A);
	console_log("B:");	print_stack(B);
	console_log("--------------------");
	pb(B, A);
	console_log("A:");	print_stack(A);
	console_log("B:");	print_stack(B);

	free_stack(A);
	free_stack(B);
}

void	SA_SB_SS_TEST()
{
	console_log("SA SB SS TEST:");
	console_log("__________________________________________");

	t_stack *A = new_stack();
	for (int i = 1; i <= 10; i++)
		push(A, i);
	console_log("A:");	print_stack(A);

	t_stack *B = new_stack();
	for (int i = -1; i >= -10; --i)
		push(B, i);
	console_log("B:");	print_stack(B);

	console_log("--------------------");
	sa(A);
	console_log("A:");	print_stack(A);
	console_log("--------------------");
	sb(B);
	console_log("B:");	print_stack(B);
	console_log("--------------------");
	ss(A, B);
	console_log("A:");	print_stack(A);
	console_log("B:");	print_stack(B);

	free_stack(A);
	free_stack(B);
}
