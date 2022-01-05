#include "push_swap.h"
#include <stdio.h>


void printel(size_t i, void *el, void *arg)
{
	(void)arg;
	(void)i;
	printf("[%d] - ", *((int *)el));
}

int	main(int ac, char **av)
{
	t_instance	instance;
	
	if (!ft_parse(ac, av) || !ft_init_instance(ac, av, &instance))
		return (1);
	ft_algo(&instance);
	ft_clear_stacks(&instance);
	return (0);
}