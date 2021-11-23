#include "push_swap.h"

void ft_stack_push(t_stack *stack, t_stack_el *new_el)
{
	if (!stack->length)
	{
		stack->top = new_el;
		stack->bottom = new_el;
	}
	else
	{
		stack->top->prev = new_el;
		new_el->next = stack->top;
		stack->top = new_el;
	}
	stack->length++;
}