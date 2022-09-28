#include "../includes/push_swap.h"

int get_biggest(t_stack *s)
{
	int biggest;

	biggest = s->nbr;
	while(s)
	{
		if(s && s->nbr > biggest)
			biggest = s->nbr;
		s = s->next;
	}
	return (biggest);
}

int	get_size(t_stack *a)
{
	int i;

	i = 0;
	while(a)
	{
		i++;
		a = a->next;
	}
	return (i);
}

int get_smallest(t_stack *a)
{
	int smallest;

	smallest = a->nbr;
	while(a)
	{
		if(a && a->nbr < smallest)
			smallest = a->nbr;
		a = a->next;
	}
	return (smallest);
}