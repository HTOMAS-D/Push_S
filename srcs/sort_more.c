#include "../includes/push_swap.h"

void sort_more(t_stack **a, t_stack **b, int div)
{
	int i[2];

	i[0] = get_smallest(*a);
	i[1] = get_biggest(*a) / div;
	while (get_size(*a) && i[0] < get_biggest(*a))
	{
		while(find_stack_range((*a), i[0], i[0] + i[1]))
		{
			put_range_top_a(a, b, i);
			push_b(a, b);
		}
		i[0] += i[1];
	}
	while (get_size(*a))
		push_b(a, b);
	while (get_size(*b))
	{
		put_top_b(a, b, get_biggest(*b));
		push_a(a, b);
	}
}