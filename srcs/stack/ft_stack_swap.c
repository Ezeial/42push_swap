#include "push_swap.h"

void	ft_stack_swap(t_stack *stack)
{
	t_stack_el	*first;
	t_stack_el	*second;

	first = stack->top;
	second = stack->top->next;
	if (!first || !second)
		return ;
	first->next = second->next;
	if (stack->length == 2)
		stack->bottom = first;
	else
		first->next->prev = first;
	first->prev = second;
	second->next = first;
	second->prev = NULL;
	stack->top = second;
}