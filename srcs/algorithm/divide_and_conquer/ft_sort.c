#include "push_swap.h"

void	ft_sort(t_stack *stacks[2])
{
	// int	current_stack;

	// current_stack = A;
	// while (!ft_are_sorted(stacks, -1))
	// {
	// 	ft_divide_and_conquer(stacks, current_stack);
	// 	PRINT
	// 	current_stack = !current_stack;
	// }
	// while (stacks[B]->top)
	// 	PA
	// PRINT
	// printf("Number of instructions : %d\n", g_count);
}
/*
	x x x x x x x x
	create_chunk(a -> b)
	dc it
	x x x x
	y y y y
	create_chunk(a -> a / b -> b) CHUNKS [0 -> len / 2, len / 2 -> len]
	dc chunk 1
	x x
	y y y y z z 
	create_chunk(x, z, y) CHUNKS [0 -> len / 4, len / 4 -> len / 2, len / 2 -> len]
	x
	y y y y z z x CHUNKS [0, len / 8, len / 4, len / 2, len] 

	[0, len] -> NULL
	run algo
	check first chunk
	is sorted ? 
		no -> find median -> stack a ? push - median stack b : push + median stack a ( COUNT ROTATE TO REVERSE ROTATE AT THE END )
		yes -> is stack b ? push a : 
		tick sorted and go next ( if not first them fusion it with precedent ) 
*/