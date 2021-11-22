#include "push_swap.h"

void	ft_stack_print(t_stack *stack, t_direction direction)
{
	t_stack_el	*temp;
	
	printf("-------------------------\n");
	printf("stack size : %ld\n", stack->length);
	printf("bottom : %d || top : %d\n", stack->top->value, stack->bottom->value);
	temp = stack->top;
	while (direction == UP && temp)
	{
		printf("%d%s", temp->value, temp->next ? " > " : " [ TOP\n");
		temp = temp->next;
	}
	temp = stack->bottom;
	while (direction == DOWN && temp)
	{
		printf("%d", temp->value, temp->prev ? " < " : "[\n");
		temp = temp->prev;
	}
	printf("\n-------------------------\n");
}