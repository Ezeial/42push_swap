#include "push_swap.h"

int	ft_clear_stacks(t_instance *instance)
{

	ft_lstclear(instance->stacks[A], free);
	ft_lstclear(instance->stacks[B], free);
	return (0);
}