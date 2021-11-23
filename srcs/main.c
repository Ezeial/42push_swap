#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack *stacks[2];

	ft_init_stacks(stacks);
	if (!ft_parse(ac, av, stacks))
		printf("Error \n");
	PRINT
	RA
	RA
	PRINT
	ft_stack_clear(stacks[A]);
	ft_stack_clear(stacks[B]);
}