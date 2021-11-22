#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// to remove
#include <stdio.h>
// end
#include "libft.h"

typedef enum {
	UP = 0,
	DOWN = 1
}	t_direction;

typedef struct s_stack_el {
	int					value;
	struct s_stack_el	*next;
	struct s_stack_el	*prev;
}	t_stack_el;

typedef struct s_stack {
	t_stack_el	*top;
	t_stack_el	*bottom;	
	size_t		length;
}	t_stack;


t_stack_el	*ft_stack_create_el(int value);
t_stack		*ft_stack_init(void);
void		ft_stack_pop(t_stack *stack);
void		ft_stack_print(t_stack *stack, t_direction direction);
void		ft_stack_push(t_stack *stack, t_stack_el *new_el);
void		ft_stack_rotate(t_stack *stack, t_direction direction);
void		ft_stack_swap(t_stack *stack);
void		ft_stack_clear(t_stack *stack);

#endif