#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// to remove
#include <stdio.h>
// end

/*---------------[ DEPENDENCIES ]---------------*/

#include "libft.h"

/*---------------[ MACROS ]---------------*/

#define A 0
#define B 1

#define PA ft_pa(stacks);
#define PB ft_pb(stacks);
#define RA ft_ra(stacks);
#define RB ft_rb(stacks);
#define RR ft_ra(stacks);ft_rb(stacks);
#define RRA ft_rra(stacks);
#define RRB ft_rrb(stacks);
#define RRR ft_rra(stacks);ft_rrb(stacks);
#define SA ft_sa(stacks);
#define SB ft_sb(stacks);
#define SS ft_sa(stacks);ft_sa(stacks);
#define PRINT printf(">>>>>>>>>>>>><<<<<<<<<<<<<\n");ft_stack_print(stacks[A]);ft_stack_print(stacks[B]);printf(">>>>>>>>>>>>><<<<<<<<<<<<<\n\n");

#define IS_EVEN(n) n % 2 == 0
#define IS_ODD(n) n % 2 != 0

int g_count;

/*---------------[ DEFINE ]---------------*/

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
	int			id;
}	t_stack;

/*---------------[ STACK ]---------------*/

t_stack_el	*ft_stack_create_el(int value);
t_stack		*ft_stack_init(int id);
int			ft_stack_pop(t_stack *stack);
void		ft_stack_print(t_stack *stack);
void		ft_stack_push(t_stack *stack, t_stack_el *new_el);
void		ft_stack_rotate(t_stack *stack, t_direction direction);
void		ft_stack_swap(t_stack *stack);
void		ft_stack_clear(t_stack *stack);

/*				[ INSTRUCTION ]				*/

void 	ft_pa(t_stack *stacks[2]);
void 	ft_pb(t_stack *stacks[2]);
void 	ft_ra(t_stack *stacks[2]);
void 	ft_rb(t_stack *stacks[2]);
void 	ft_rra(t_stack *stacks[2]);
void 	ft_rrb(t_stack *stacks[2]);
void	ft_sa(t_stack *stacks[2]);
void	ft_sb(t_stack *stacks[2]);

/*---------------[ INITIALIZATION ]---------------*/

void	ft_init_stacks(t_stack *stacks[2]);
int		ft_parse(int ac, char **av, t_stack *stacks[2]);

/*---------------[ ALGORITHM ]---------------*/

int		ft_find_median(t_stack *stack);
int		ft_are_sorted(t_stack *stacks[2], int id);
void	ft_divide_and_conquer(t_stack *stacks[2], int id);
void	ft_algo_dq(t_stack *stacks[2]);

#endif