#include "../includes/push_swap.h"

static int  top_bigger_than_bot(t_stack *bot, t_stack *top)
{
    t_stack *temp;

    temp = top;
    while(bot != temp)
    {
        top = temp;
        while(top)
        {
            if(top->nbr < bot->nbr)
                return (0);
            top = top->next;
        }
        bot = bot->next;
    }
    return (1);
}

static int top_smaller_than_bot(t_stack *bot, t_stack *top)
{
    t_stack *temp;

    temp = top;
    while (bot != temp)
    {
        top = temp;
        while (top)
        {
            if (top->nbr > bot->nbr)
                return (0);
            top = top->next;
        }
        bot = bot->next;
    }
    return (1);
}

static int something_sorted_top(t_stack **a, t_stack *s)
{
    if(!top_smaller_than_bot(*a, s))
        return (0);
    while(s->next)
    {
        if(s->nbr > s->next->nbr)
            return (1);
        s = s->next;
    }
    return (1);
}

static int something_sorted(t_stack **a)
{
    t_stack *temp;

    temp = *a;
    while(temp->next)
    {
        if(temp->nbr > temp->next->nbr)
            return (something_sorted_top(a, temp->next));
        temp = temp->next;
    }
    return (0);
}

void    try_sort(t_stack **a, t_stack **b)
{
    if(something_sorted(a))
        return (put_top_a(a, b, get_smallest(*a)));
    if(*a && (*a)->next && (*a)->next->next && is_sorted(&(*a)->next->next)
        && top_bigger_than_bot(*a, (*a)->next->next))
        swap_a(a);
}