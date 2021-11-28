#include "push_swap.h"

/*
	id of -1 mean are the both stack sorted,
	else it will tell only if the [id] stack is sorted. 
*/
int ft_are_sorted(t_stack *stacks[2], int id)
{
	t_stack_el *current;

	current = stacks[B]->bottom;
	while (id != A && current && current->prev)
	{
		if (current->prev->value < current->value)
			return (0);
		current = current->prev;
	}
	current = stacks[A]->top;
	while (id != B && current && current->next)
	{
		if (current->next->value < current->value)
			return (0);
		current = current->next;
	}
	return (1);
}