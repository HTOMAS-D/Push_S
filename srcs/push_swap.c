#include "../includes/push_swap.h"
#include "../libft/ft_printf.h"

t_stack *add_node(int n)
{
	t_stack *new;

	new = malloc(sizeof(t_stack));
	if(!new)
		return (NULL);
	new->nbr = n;
	new->next = NULL;
	return (new);
}

t_stack *stack_a(int ac, char **av, int start)
{
	t_stack *temp;
	t_stack	*first;

	temp = NULL;
	first = add_node(ft_atoi(av[start++]));
	temp = first;
	while(start != ac)
	{
		temp->next = add_node(ft_atoi(av[start]));
		temp = temp->next;
		start++;
	}
	temp->next = NULL;
	return (first);

}
int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack *b;

	check_args(ac, av);
	a = stack_a(ac, av, 1);
	while(a->next != NULL)
		ft_printf("%d", a->nbr);
}
