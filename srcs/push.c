/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 15:50:04 by rade-sar          #+#    #+#             */
/*   Updated: 2022/04/26 11:51:01 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push(t_stack **a, t_stack **b)
{
	t_stack	*aux_a;
	t_stack	*aux_b;

	if (!a)
		return ;
	aux_a = (*a)->next;
	aux_b = *a;
	*a = aux_a;
	aux_b->next = *b;
	*b = aux_b;
}

void	pa(t_stack **a, t_stack **b, t_count *f)
{
	char	n;

	push(b, a);
	write(1, "pa\n", 3);
	f->count = f->count + 1;
}

void	pb(t_stack **a, t_stack **b, t_count *f)
{
	char	n;

	push(a, b);
	write(1, "pb\n", 3);
	f->count = f->count + 1;
}
