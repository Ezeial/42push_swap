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
}	t_instance;

/*---------------[ STACK ]---------------*/

/*---------------[ INITIALIZATION ]---------------*/

int			ft_parse(int ac, char **av);
void		ft_init_instance(int ac, char **av, t_instance *instance);

/*---------------[ ALGORITHM ]---------------*/

#endif
