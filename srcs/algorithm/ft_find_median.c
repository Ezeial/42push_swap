#include "push_swap.h"

static int *ft_sort_stack(t_stack *stack)
{
	t_stack_el	*current;
	size_t		i;
	int			*arr;
	int			temp;

	arr = malloc(sizeof(int) * stack->length);
	if (!arr)
		return (NULL);
	current = stack->bottom;
	i = 0;
	while (current && i < stack->length)
	{
		arr[i] = current->value;
		i++;
		current = current->prev;
	}
	i = 1;
	while (i < stack->length)
	{
		if (arr[i] > arr[i - 1])
		{
			temp = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = temp;
			i = 0;
		}
		i++;
	}
	return (arr);
}

int ft_find_median(t_stack *stack)
{
	int	*arr;
	int	med;

	arr = ft_sort_stack(stack);
	if (stack->id == A && IS_EVEN(stack->length))
		med = arr[(stack->length / 2) - 1];
	else
		med = arr[stack->length / 2];
	free(arr);
	return (med);
}