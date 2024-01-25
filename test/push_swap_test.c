# include "test.h"

void	SA_SB_SS_TEST(t_stack *A, t_stack *B)
{
	console_log("SA SB SS TEST:");
	console_log("__________________________________________");
	for (int i = 1; i <= 10; i++)
		push(A, i);
	print_stack(A);
	swap(A);
	print_stack(A);
	for (int i = 1; i <= 10; i++)
		push(B, i);
	print_stack(B);
	swap(B);
	print_stack(B);
	swap(A);
	swap(B);
	print_stack(A);
	print_stack(B);
}
