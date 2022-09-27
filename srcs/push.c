#include "../includes/push_swap.h"

static void    push(t_stack **a, t_stack **b)
{
    t_stack *temp;
    t_stack *temp2;
    
    if(!b)
        return ;
    temp = (*b)->next;
    temp2 = *b;
    *b = temp;
    temp2->next = *a;
    *a = temp2;
}

void    push_a(t_stack **a, t_stack **b)
{
    push(a, b);
    ft_printf("pa\n");
} 

void    push_b(t_stack **a, t_stack **b)
{
    push(b, a);
    ft_printf("pb\n");
}