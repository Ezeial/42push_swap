#include "push_swap.h"

void	ft_stack_print(t_stack *stack)
{
	t_stack_el	*temp;
	
	printf("stack size : %ld\n\n", stack->length);
	// printf("bottom : %d || top : %d\n", stack->top->value, stack->bottom->value);
	temp = stack->bottom;
	if (!temp)
		printf("[ EMPTY\n");
	while (temp)
	{
		printf("%d%s", temp->value, temp->prev ? " > " : " [ TOP\n");
		temp = temp->prev;
	}
	printf("--------------------------\n");
}