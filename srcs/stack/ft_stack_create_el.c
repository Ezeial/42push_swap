#include "push_swap.h"

t_stack_el	*ft_stack_create_el(int value)
{
	t_stack_el	*new_el;

	new_el = malloc(sizeof(t_stack_el));
	if (!new_el)
		return (NULL);
	new_el->value = value;
	new_el->next = NULL;
	new_el->prev = NULL;
	return (new_el);
}