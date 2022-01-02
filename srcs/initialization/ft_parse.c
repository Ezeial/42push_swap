#include "push_swap.h"

int	ft_parse(int ac, char **av, t_instance *instance)
{
	if (ac < 2)
		return (0);
	av++;
	while (*av)
	{
		if (!ft_is_integer(*av))
			return (0);
		av++;
	}
	return (1);
}
