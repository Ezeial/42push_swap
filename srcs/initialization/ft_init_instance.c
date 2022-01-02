#include "push_swap.h"

int	ft_init_instance(int ac, char **av, t_instance *instance)
{
	size_t	i;
	int		*current_int;

	instance->stacks[A] = ft_lstnew();
	instance->stacks[B] = ft_lstnew();
	if (instance->stacks[A] || instance->stacks[B])
		return (0);
	i = 1;
	while (i < ac)
	{
		current_int = malloc(sizeof(int));
		if (!current_int)
		{
			ft_lstclear(instance->stacks[A]);
			ft_lstclear(instance->stacks[B]);
			return (0);
		}
		*current_int = ft_atoi(av[i]);
		ft_lstadd_front(instance->stacks[A], current_int);
		i++;
	}
}
