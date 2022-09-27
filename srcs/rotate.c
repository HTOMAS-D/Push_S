#include "../includes/push_swap.h"

static void    rotate(t_stack **stack)
{
    t_stack *temp;
    t_stack *temp2;

    temp = *stack;
    temp2 = (*stack)->next;
    while((*stack)->next)
        *stack = (*stack)->next;
    (*stack)->next = temp;
    *stack = temp2;
    temp->next = NULL;
}

void    rotate_a(t_stack **a)
{
    rotate(a);
    ft_printf("ra\n");
}

void   rotate_b(t_stack **b)
{
    rotate(b);
    ft_printf("rb\n");
}

void    rotate_both(t_stack **a, t_stack **b)
{
    rotate(a);
    rotate(b);
    ft_printf("rr\n");
}