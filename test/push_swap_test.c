# include "test.h"

void	SA_SB_SS_TEST()
{
	console_log("SA SB SS TEST:");
	console_log("__________________________________________");

	t_stack *A = new_stack();
	t_stack *B = new_stack();
	for (int i = 1; i <= 10; i++)
		push(A, i);
	for (int i = 1; i <= 10; i++)
		push(B, i);
	print_stack(A);
	swap(A);
	print_stack(A);
	print_stack(B);
	swap(B);
	print_stack(B);
	swap(A);
	swap(B);
	print_stack(A);
	print_stack(B);
}
