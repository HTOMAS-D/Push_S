#include "../includes/push_swap.h"

void    sort_3_a(t_stack **a)
{
    t_stack *t;
    t_stack *t2;
    t_stack *t3;

    t = *a;
    t2 = t->next;
    t3 = t2->next;
    while (is_sorted(a))
    {
        if((t3->nbr < t2->nbr && t3->nbr < t->nbr && t2->nbr < t->nbr) 
            || (t3->nbr > t2->nbr && t3->nbr > t->nbr)
            || (t->nbr < t2->nbr && t->nbr < t3->nbr))
            swap_a(a);
        else if(t->nbr > t2->nbr && t->nbr > t3->nbr 
            && t2->nbr < t3->nbr)
            rotate_a(a);
        else if(t3->nbr < t2->nbr && t3->nbr < t->nbr)
            revrotate_a(a);
    }
}
void    sort_3_b(t_stack **b)
{
    
}