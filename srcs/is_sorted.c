#include "../includes/push_swap.h"

void sort(int ac, t_stack **a, t_stack **b)
{
    if (ac == 2)
        sort_2_a(a);
    else if (ac == 3)
        sort_3_a(a);
    else if (ac <= 6)
        sort_5(a, b);
    else if (ac <= 100)
    {
        sort_more(a, b, 3);
    }
    else if (ac <= 500)
    {
        sort_more(a, b, 11);
    }
}

int is_sorted(t_stack **a)
{
    t_stack *temp;

    temp = *a;
    while(temp)
    {
        if(temp->next && temp->nbr > temp->next->nbr)
            return (1);
        temp = temp->next;
    }
    return (0);
}