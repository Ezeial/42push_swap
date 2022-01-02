#include "push_swap.h"
#include <stdio.h>

void lstprint_el(void *el, void *arg)
{
	printf("[%d]\n", *((int *)el));
}

int *create_int(int data)
{
	int *new = malloc(sizeof(int));
	*new = data;
	return new;
}

int	main(int ac, char **av)
{
	t_instance	instance;
	
	if (!ft_parse(ac, av))
		return (1)
	ft_lstclear(instance.stacks[A], free);
	ft_lstclear(instance.stacks[B], free);
}
