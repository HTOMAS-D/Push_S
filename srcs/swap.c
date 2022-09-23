#include "../includes/push_swap.h"

void    swap(t_stack *stack)
{
    int temp;

    temp = stack->nbr;
    stack->nbr = stack->next->nbr;
    stack->next->nbr = temp;
}

void    swap_a(t_stack *a)
{
    if(a && a->next)
    {
        swap(a);
        ft_printf("sa\n");
    }
}

void    swap_b(t_stack *b)
{
    if(b && b->next)
    {
        swap(b);
        ft_printf("sb\n");
    }
}

void    swap_both(t_stack *a, t_stack *b)
{
    if(a && a->next && b && b->next)
    {
        swap(a);
        swap(b);
        ft_printf("ss\n");
    }
}