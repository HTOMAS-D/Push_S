#include "../includes/push_swap.h"

void	put_top_a(t_stack **a, t_stack **b, int nbr)
{
	int mid;

	if(get_size(*a) < 2 || (*a)->nbr == nbr)
		return;
	mid = get_size(*a) / 2;
	if(find_bot_nbr(*a, nbr, mid))
		while((*a)->nbr != nbr)
			rotate_a(a);
	else
		while((*a)->nbr != nbr)
			revrotate_a(a);
}
void	put_top_b(t_stack **b, t_stack **a, int nbr)
{
	int mid;

	if(get_size(*b) < 2 || (*b)->nbr == nbr)
		return;
	mid = get_size(*b) / 2;
	if(find_bot_nbr(*b, nbr, mid))
		while((*b)->nbr != nbr)
			rotate_b(b);
	else
		while((*b)->nbr != nbr)
			revrotate_b(b);
}