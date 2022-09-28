#include "../includes/push_swap.h"

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