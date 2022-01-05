#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*---------------[ DEPENDENCIES ]---------------*/

#include <stdio.h>
#include "libft.h"

/*---------------[ MACROS ]---------------*/

#define A 0
#define B 1

/*---------------[ TYPEDEFS ]---------------*/

typedef struct s_instance {
	size_t	*chunks;
	t_list	*stacks[2];
	size_t	elem_len;
}	t_instance;

/*---------------[ INITIALIZATION ]---------------*/

int			ft_parse(int ac, char **av);
int			ft_init_instance(int ac, char **av, t_instance *instance);

/*---------------[ DESTRUCTION ]---------------*/

int			ft_clear_stacks(t_instance *instance);

/*---------------[ ALGORITHM ]---------------*/

void	ft_algo(t_instance *instance);

#endif
