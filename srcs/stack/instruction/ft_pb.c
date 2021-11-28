#include "push_swap.h"

void ft_pb(t_stack *stacks[2])
{
	int top_a;

	if (stacks[A]->length < 1)
		return ;
	top_a = ft_stack_pop(stacks[A]);
	ft_stack_push(stacks[B], ft_stack_create_el(top_a));
	printf("pb\n");
	g_count++;
}