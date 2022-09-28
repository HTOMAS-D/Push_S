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

static char *move_b(t_stack **b, int nbr)
{
	int med;
	
	printf("ola 1\n");
	if(get_size(*b) < 2 || (*b)->nbr == nbr)
		return (NULL);
	med = get_size(*b) / 2;
	if(find_bot_nbr(*b, nbr, med))
		return ("rb");
	return ("rrb");

}

static int	mv_a(t_stack **a, t_stack **b, char *str)
{
	char *mv_b;

	printf("ola 1\n");
	mv_b = move_b(b, get_biggest(*b));
	printf("ola 1\n");
	if (!mv_b)
		return (1);
	printf("ola 2\n");
	if(!ft_strcmp(str, "ra") && !ft_strcmp(mv_b, "rb"))
	{
		printf("ola 3\n");
		rotate_both(a, b);
		return (0);
	}
	if(!ft_strcmp(str, "ra") && !ft_strcmp(mv_b, "rrb"))
	{
		revrotate_both(a, b);
		return (0);
	}
	if(!ft_strcmp(mv_b, "rb"))
		rotate_b(b);
	if(!ft_strcmp(mv_b, "rrb"))
		revrotate_b(b);
	return (1);
}

void	put_range_top_a(t_stack **a, t_stack **b, int i[2])
{
	int fst;
	int med;
	int lst;

	fst = i[0];
	lst = i[0] + i[1];
	if(get_size(*a) < 2 || (*a)->nbr >= fst && (*a)->nbr <= lst)
		return;
	med = get_size(*a) / 2;
	if(find_top_range((*a), fst, lst, med))
	{
		while(!((*a)->nbr >= fst && (*a)->nbr <= lst))
		{	
			if(mv_a(a, b, "ra"))
				{
					printf("ola 5\n");
					rotate_a(a);
				}
		}
	}
	else
		while(!((*a)->nbr >= fst && (*a)->nbr <= lst))
			printf("ola 6\n");
			if(mv_a(a, b, "rra"))
				printf("ola 7\n");
				revrotate_a(a);
}