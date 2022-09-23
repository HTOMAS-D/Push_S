#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include "../libft/ft_printf.h"
#include <limits.h>

typedef struct s_stack
{
	int	nbr;	
	struct s_stack *next;
}	t_stack;

//ERROR.C
void	arg_error(int ac);

//CHECK.C
void	check_args(int ac, char **av);
int	check_each(char *str);
int	check_dup(int ac, char **av, int i);

//IS_SORTED.C
int	is_sorted(t_stack *a);

//SWAP.C
void	swap(t_stack *stack);
void	swap_a(t_stack *a);
void	swap_b(t_stack *b);
void	swap_both(t_stack *a, t_stack *b);

//PUSH.C
static void	push(t_stack *a, t_stack *b);
void	push_a(t_stack *a, t_stack *b);
void	push_b(t_stack *a, t_stack *b);

//ROTATE.C
void	rotate(t_stack *stack);
void	rotate_a(t_stack *a);
void	rotate_b(t_stack *b);
void	rotate_both(t_stack *a, t_stack *b);

#endif
