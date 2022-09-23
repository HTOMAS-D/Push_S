#include "../includes/push_swap.h"

int is_sorted(t_stack *a)
{
    t_stack *temp;
    temp = a;
    while(temp)
    {
        if(temp->next && temp->nbr > temp->next->nbr)
            return (1);
        temp = temp->next;
    }
    return (0);
}