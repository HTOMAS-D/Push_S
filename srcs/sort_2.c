#include "../includes/push_swap.h"

void    sort_2_a(t_stack **a)
{
    if((*a)->nbr > (*a)->next->nbr)
        swap_a(a);
}

void    sort_2_b(t_stack **b)
{
    if((*b)->nbr < (*b)->next->nbr)
        swap_b(b);
}