#include "push_swap.h"

void ft_stack_pop(t_stack *stack)
{
	if (stack->length)
	{
		stack->top = stack->top->next;
		free(stack->top->prev);
		stack->top->prev = NULL;
		stack->length--;
	}
	if (!stack->length)
		stack->bottom = NULL;	
}