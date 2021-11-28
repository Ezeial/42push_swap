#include "push_swap.h"

void	ft_algo_dq(t_stack *stacks[2])
{
	int current_stack;

	current_stack = A;
	while (!ft_are_sorted(stacks, -1))
	{
		if (ft_divide_and_conquer(stacks, current_stack))
			current_stack = !current_stack;
		PRINT
	}
	while (stacks[B]->top)
		PA
	PRINT
	printf("Number of instructions : %d\n", g_count);
}