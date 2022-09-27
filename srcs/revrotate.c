#include "../includes/push_swap.h"

static void    revrotate (t_stack **stack)
{
    t_stack *first;
    t_stack *last;
    t_stack *temp;

    first = *stack;
    temp = *stack;
    while (temp->next)
        temp = temp->next;
    last = temp;
    *stack = last;
    last->next = first;
    while(temp -> next != last)
        temp = temp->next;
    temp->next = NULL;
}

void    revrotate_a(t_stack **a)
{
    revrotate(a);
    ft_printf("rra\n");
}

void    revrotate_b(t_stack **b)
{
    revrotate(b);
    ft_printf("rrb\n");
}

void    revrotate_both(t_stack **a, t_stack **b)
{
    revrotate(a);
    revrotate(b);
    ft_printf("rrr\n");
}