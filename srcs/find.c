#include "../includes/push_swap.h"

int	find_top_range(t_stack *s, int fst, int lst, int med)
{
	int i;

	i = 0;
	while(s)
	{
		if(s->nbr >= fst && s->nbr <= lst)
			return (i);
		s = s->next;
		i++;
	}
	return (0);
}

int find_stack_range(t_stack *s, int start, int end)
{
	int i;

	i = 1;
	while(s)
	{
		if(s->nbr >= start && s->nbr <= end)
			return (i);
		s = s->next;
		i++;
	}
	return (0);
}

int find_bot_nbr(t_stack *s, int n, int med)
{
	int i;

	i = 0;
	while (s && i < med)
	{
		if (s->nbr == n)
			return (1);
		s = s->next;
		i++;
	}
	return (0);
}