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
int	is_sorted(t_stack **a);
void	sort(int ac, t_stack **a, t_stack **b);

//SWAP.C
void	swap(t_stack **stack);
void	swap_a(t_stack **a);
void	swap_b(t_stack **b);
void	swap_both(t_stack **a, t_stack **b);

//PUSH.C
static void	push(t_stack **a, t_stack **b);
void	push_a(t_stack **a, t_stack **b);
void	push_b(t_stack **a, t_stack **b);

//ROTATE.C
static void	rotate(t_stack **stack);
void	rotate_a(t_stack **a);
void	rotate_b(t_stack **b);
void	rotate_both(t_stack **a, t_stack **b);

//REVROTATE.C
static void   revrotate(t_stack **stack);
void   revrotate_a(t_stack **a);
void   revrotate_b(t_stack **b);
void   revrotate_both(t_stack **a, t_stack **b);

//SORT_2.C
void	sort_2_a(t_stack **a);
void   sort_2_b(t_stack **b);

//SORT_3.C
void	sort_3_a(t_stack **a);
void	sort_3_b(t_stack **b);

//SORT_5.C
void	sort_5(t_stack **a, t_stack **b);

//GETS.C
int get_size(t_stack *a);
int get_smallest(t_stack *a);
int get_biggest(t_stack *a);

//PUT_TOP.C
void	put_top_a(t_stack **a, t_stack **b, int nbr);
void	put_top_b(t_stack **a, t_stack **b, int nbr);
void	put_range_top_a(t_stack **a, t_stack **b, int i[2]);
static int	mv_a(t_stack **a, t_stack **b, char *str);
static char *move_b(t_stack **b, int nbr);

//FIND.C
int	find_bot_nbr(t_stack *s, int n, int med);
int	find_stack_range(t_stack *s, int start, int end);
int	find_top_range(t_stack *s, int fst, int lst, int med);

//SORT_MORE.C
void	sort_more(t_stack **a, t_stack **b, int div);

//TRY_SORT.C
void	try_sort(t_stack **a, t_stack **b);
static int something_sorted(t_stack **a);
static int something_sorted_top(t_stack **a, t_stack *s);
static int top_bigger_than_bot(t_stack *bot, t_stack *top);
static int top_smaller_than_bot(t_stack *bot, t_stack *top);
#endif
