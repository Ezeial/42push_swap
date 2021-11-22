#include "push_swap.h"

void ft_stack_clear(t_stack *stack)
{
	t_stack_el	*temp;

	while (stack->top)
	{
		temp = stack->top->next;
		free(stack->top);
		stack->top = temp;
		stack->length--;
	}
	free(stack);
}