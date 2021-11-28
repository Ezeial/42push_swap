#include "push_swap.h"

void ft_pa(t_stack *stacks[2])
{
	int top_b;
	
	if (stacks[B]->length < 1)
		return ;
	top_b = ft_stack_pop(stacks[B]);
	ft_stack_push(stacks[A], ft_stack_create_el(top_b));
	printf("pa\n");
	g_count++;
}