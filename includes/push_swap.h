#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include "../libft/ft_printf.h"

typedef struct s_stack
{
	t_stack *next
}	t_stack;

typedef struct s_ps
{
	t_stack *a;
	t_stack	*b;
}	t_ps;

//ERROR.C
void	arg_error(int ac);

#endif
