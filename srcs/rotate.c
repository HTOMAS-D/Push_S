/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 15:53:11 by rade-sar          #+#    #+#             */
/*   Updated: 2022/04/26 11:51:23 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	rotate(t_stack **s)
{
	t_stack	*first;
	t_stack	*result;

	first = *s;
	result = (*s)->next;
	while ((*s)->next)
		*s = (*s)->next;
	(*s)->next = first;
	*s = result;
	first->next = NULL;
}

void	ra(t_stack **a, t_count *f)
{
	char	n;

	rotate(a);
	write(1, "ra\n", 3);
	f->count = f->count + 1;
}

void	rb(t_stack **b, t_count *f)
{
	char	n;

	rotate(b);
	write(1, "rb\n", 3);
	f->count = f->count + 1;
}

void	rr(t_stack **a, t_stack **b, t_count *f)
{
	char	n;

	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
	f->count = f->count + 1;
}
