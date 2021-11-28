#include "push_swap.h"

void ft_rb(t_stack *stacks[2])
{
	ft_stack_rotate(stacks[B], UP);
	printf("rb\n");
	g_count++;
}