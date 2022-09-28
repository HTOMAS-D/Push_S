/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rv_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 15:54:06 by rade-sar          #+#    #+#             */
/*   Updated: 2022/04/26 11:51:34 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	rv_rotate(t_stack **s)
{
	t_stack	*first;
	t_stack	*last;
	t_stack	*tmp;

	first = *s;
	tmp = *s;
	while (tmp -> next)
		tmp = tmp -> next;
	last = tmp;
	*s = last;
	last -> next = first;
	while (tmp -> next != last)
		tmp = tmp -> next;
	tmp->next = NULL;
}

void	rra(t_stack **a, t_count *f)
{
	char	n;

	rv_rotate(a);
	write(1, "rra\n", 4);
	f->count = f->count + 1;
}

void	rrb(t_stack **b, t_count *f)
{
	char	n;

	rv_rotate(b);
	write(1, "rrb\n", 4);
	f->count = f->count + 1;
}

void	rrr(t_stack **a, t_stack **b, t_count *f)
{
	char	n;

	rv_rotate(a);
	rv_rotate(b);
	write(1, "rrr\n", 4);
	f->count = f->count + 1;
}
