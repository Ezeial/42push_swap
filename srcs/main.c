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

void *add(void *el, void *arg)
{
	int res;

	res = *((int *)el) + *((int *)arg);
	return create_int(res);
}

int	main(int ac, char **av)
{
	t_list	*lst;
	t_list	*mapped;
	int *a;
	a = create_int(5);
	lst = ft_lstnew();
	ft_lstadd_back(lst, create_int(1));
	ft_lstadd_back(lst, create_int(2));
	ft_lstadd_back(lst, create_int(3));
	ft_lstadd_back(lst, create_int(3));
	ft_lstadd_back(lst, create_int(3));
	ft_lstadd_back(lst, create_int(3));
	mapped = ft_lstmap(lst, add, a);
	free(a);
	ft_lstiter(mapped, lstprint_el, NULL);
	ft_lstclear(lst, free);
	ft_lstclear(mapped, free);
}

/*

goal : 

23 15 9 8 6 5 5 3 2 

6 5 3 2 5 9 15 8 23
0 0 0 0 0

*/

