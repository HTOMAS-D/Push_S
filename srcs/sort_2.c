/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:23:43 by rade-sar          #+#    #+#             */
/*   Updated: 2022/04/26 11:53:30 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_2_a(t_stack **a, t_count *f)
{
	if (!is_sorted(a))
		sa(a, f);
	return ;
}

void	sort_2_b(t_stack **b, t_count *f)
{
	if (!is_sorted(b))
		sb(b, f);
	return ;
}
