# include "test.h"

void	EMPTY_TEST(void)
{
	console_log("EMPTY_TEST");
	console_log("__________________________");

	t_stack	*A = new_stack();
	console_log("A:");	print_stack(A);
	t_stack	*B = new_stack();
	console_log("B:");	print_stack(B);

	console_log("--------------------------");
	pa(A, B);
	console_log("A:");	print_stack(A);
	console_log("B:");	print_stack(B);
	console_log("--------------------------");
	pb(B, A);
	console_log("A:");	print_stack(A);
	console_log("B:");	print_stack(B);
	console_log("--------------------------");

	if (A->size == 0 && B->size == 0)
		console_log("OK");
	else
		console_log("NG");

	free_stack(A);
	free_stack(B);
}
