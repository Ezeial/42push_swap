#include "push_swap.h"

void	ft_stack_rotate(t_stack *stack, t_direction direction)
{
	if (stack->length < 2)
		return ;
	if (direction == UP)
	{
		stack->bottom->next = stack->top;
		stack->top->prev = stack->bottom;
		stack->top = stack->top->next;
		stack->bottom = stack->bottom->next;
		stack->bottom->next = NULL;
		stack->top->prev = NULL;
		return ;
	}
	if (direction == DOWN)
	{
		stack->bottom->next = stack->top;
		stack->top->prev = stack->bottom;
		stack->bottom = stack->bottom->next;
		stack->top = stack->top->next;
		stack->bottom->next = NULL;
		stack->top->prev = NULL;
		return ;
	}
	if (stack->length == 2)
		stack->bottom = stack->top->next;
}