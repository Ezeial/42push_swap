#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack *stacks[2];

	ft_init_stacks(stacks);
	if (!ft_parse(ac, av, stacks))
	{
		ft_stack_clear(stacks[A]);
		ft_stack_clear(stacks[B]);	
		return (1);
	}
	ft_algo_dq(stacks);
	ft_stack_clear(stacks[A]);
	ft_stack_clear(stacks[B]);
}

/*

goal : 

23 15 9 8 6 5 5 3 2 

6 5 3 2 5 9 15 8 23
0 0 0 0 0

*/

