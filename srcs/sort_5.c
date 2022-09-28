#include "../includes/push_swap.h"

void	sort_5(t_stack **a, t_stack **b)
{
	while(get_size(*a) > 3)
	{
		put_top_a(a, b, get_smallest(*a));
		push_b(a, b);
	}
	sort_3_a(a);
	while(get_size(*b) > 0)
	{
		put_top_b(b, a, get_biggest(*b));
		push_a(a, b);
	}
	put_top_a(a, b, get_smallest(*a));
}