/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:20:04 by rade-sar          #+#    #+#             */
/*   Updated: 2022/04/26 11:51:46 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort(int argc, t_stack **a, t_stack **b, t_count *f)
{
	if (argc == 2)
		sort_2_a(a, f);
	else if (argc == 3)
		sort_3_a(a, f);
	else if (argc <= 6)
		sort_5(a, b, f);
	else if (argc <= 100)
		sort_more(a, b, 3, f);
	else if (argc <= 500)
		sort_more(a, b, 7, f);
}

int	is_sorted(t_stack **s)
{
	t_stack	*aux;

	aux = *s;
	while (aux)
	{
		if (aux->next && aux->next->nbr < aux->nbr)
			return (0);
		aux = aux->next;
	}
	return (1);
}
