#include "push_swap.h"

static int ft_is_dividing_done(t_stack *stack, int med)
{
	t_stack_el *current;

	current = stack->top;
	while (current)
	{
		if (stack->id == A && current->value < med)
			return (0);
		if (stack->id == B && current->value > med)
			return (0);
		current = current->next;
	}
	return (1);
}

static int ft_is_dividing_usefull(t_stack *stack, int med)
{
	t_stack_el *current;
	size_t i;
	size_t total;

	i = 0;
	current = stack->top;
	total = stack->length / 2;
	if (IS_EVEN(stack->length))
		total++;
	if (stack->length < 2)
		return (1);
	while (i < stack->length / 2)
	{
		if (stack->id == A && current->value > med)
			return (1);
		if (stack->id == B && current->value < med)
			return (1);
		i++;
		current = current->next;
	}
	return (0);
}

int ft_divide_and_conquer(t_stack *stacks[2], int id)
{	
	int	med;
	int useful;

	med = ft_find_median(stacks[id]);
	useful = 0;
	if (id == A)
	{
		while (!ft_is_dividing_done(stacks[id], med))
		{
			if (stacks[id]->top->value == med)
			{
				SA
				useful = 1;
			}
			if (stacks[id]->top->value < med)
				PB
			else
			{
				RA
				useful = 1;
			}
		}		
	}
	if (id == B)
	{
		while (!ft_is_dividing_done(stacks[id], med))
		{
			if (stacks[id]->top->value == med)
			{
				SB
				useful = 1;
			}
			if (stacks[id]->top->value > med)
				PA
			else
			{
				useful = 1;
				RB
			}
		}
	}
	while (stacks[id]->top->value != med)
	{
		if (id == A)
		{
			RA
			useful = 1;
		}
		else
		{
			useful = 1;
		}
	}
	return (useful);
}