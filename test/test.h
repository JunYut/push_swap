# ifndef TEST_H
#	define TEST_H

	# include "../includes/push_swap.h"

	int	    TEST(char *test);

	void	ALL_TEST(t_stack *A, t_stack *B);
	void    PUSH_TEST(t_stack *stack);
	void	POP_TEST(t_stack *stack);
	void	SWAP_TEST(t_stack *stack);
	void	ROTATE_TEST(t_stack *stack);
	void	SA_SB_SS_TEST(t_stack *A, t_stack *B);
	void	PA_PB_TEST(t_stack *A, t_stack *B);
	void	RA_RB_RR_TEST(t_stack *A, t_stack *B);
	void	RRA_RRB_RRR_TEST(t_stack *A, t_stack *B);

	void	DEBUG_SWAP(t_stack *stack);

# endif