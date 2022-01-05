#include "push_swap.h"

static void	ft_push_node(size_t i, void *node_data, void *array)	
{
	((int *)array)[i] = *((int *)node_data);
}

static int	ft_indexof(int *array, int value)
{
	int	i;

	i = 0;
	while (array[i] != value)
		i++;
	return (i);
}

static void	ft_node_to_index(size_t i, void *node_data, void *sorted_stack)
{
	(void)i;
	*((int *)node_data) = ft_indexof((int *)sorted_stack, *((int *)node_data));
}

int	ft_init_instance(int ac, char **av, t_instance *instance)
{
	size_t		i;
	t_list_elem *new_elem;
	int			*current_int;
	int			*sorted_stack;

	instance->stacks[A] = ft_lstnew();
	instance->stacks[B] = ft_lstnew();
	if (!instance->stacks[A] || !instance->stacks[B])
		return (ft_clear_stacks(instance));
	i = 1;
	while (i < (size_t)ac)
	{
		current_int = (int *)malloc(sizeof(int));
		if (!current_int)
			return (ft_clear_stacks(instance));
		new_elem = ft_lstcreate_elem(current_int);
		if (!new_elem)
		{
			free(current_int);
			return (ft_clear_stacks(instance));
		}
		*current_int = ft_atoi(av[i]);
		new_elem->data = current_int;
		ft_lstpush_front(instance->stacks[A], new_elem);
		i++;
	}
	instance->elem_len = ft_lstsize(instance->stacks[A]);
	sorted_stack = (int *)malloc(sizeof(int) * instance->elem_len);
	if (!sorted_stack)
		return (ft_clear_stacks(instance));
	ft_lstiter(instance->stacks[A], ft_push_node, sorted_stack);
	ft_quicksort(sorted_stack, 0, instance->elem_len - 1);
	ft_lstiter(instance->stacks[A], ft_node_to_index, sorted_stack);
	free(sorted_stack);
	return (1);
}
