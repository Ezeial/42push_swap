#include "push_swap.h"

t_stack	*ft_stack_init(int id)
{
	t_stack	*new_stack;

	new_stack = malloc(sizeof(t_stack));
	if (!new_stack)
		return (NULL);
	new_stack->length = 0;
	new_stack->id = id;
	new_stack->top = NULL;
	new_stack->bottom = NULL;
	return (new_stack);
}