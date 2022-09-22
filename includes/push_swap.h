#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include "../libft/ft_printf.h"
#include <limits.h>

typedef struct s_stack
{
	int	numb;	
	t_stack *next
}	t_stack;

//ERROR.C
void	arg_error(int ac);

//CHECK.C
void	check_args(int ac, char **av);
int	check_each(char *str);
int	check_dup(char **av);

#endif
