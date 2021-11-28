#include "push_swap.h"

void	ft_init_stacks(t_stack *stacks[2])
{
	stacks[A] = ft_stack_init(A);
	stacks[B] = ft_stack_init(B);
}