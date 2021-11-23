#include "push_swap.h"

int	ft_stack_pop(t_stack *stack)
{
	int			poped;
	t_stack_el	*last;
	
	printf ("len %d\n", stack->length);
	if (0 < stack->length)
	{
		last = stack->top;
		poped = last->value;
		stack->top = stack->top->next;
		free(last);
		if (stack->top)
			stack->top->prev = NULL;
		else
			stack->bottom = NULL;
		stack->length--;
		printf("poped : %d\n", poped);
		return (poped);
	}
	
	return (0);
}