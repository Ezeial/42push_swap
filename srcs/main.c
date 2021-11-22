#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack *stack;
	stack = ft_stack_init();
	ft_stack_push(stack, ft_stack_create_el(3));
	ft_stack_push(stack, ft_stack_create_el(7));
	ft_stack_rotate(stack, UP);
	ft_stack_print(stack, UP);
	ft_stack_clear(stack);
}