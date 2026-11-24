/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 14:46:17 by fabuassa          #+#    #+#             */
/*   Updated: 2026/11/21 16:00:59 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	quick_sort_a(t_stack **a, t_stack **b, int size, int *ops)
{
	int	pushed;

	if (size <= 1)
		return ;
	if (size == 2)
	{
		if (!(*a)->next)
			return ;
		if ((*a)->number > (*a)->next->number)
			sa(a, ops);
		return ;
	}
	pushed = partition_a(a, b, size, ops);
	quick_sort_a(a, b, size - pushed, ops);
	quick_sort_b(a, b, pushed, ops);
}

void	quick_sort_b(t_stack **a, t_stack **b, int size, int *ops)
{
	int	pushed;

	if (size == 0)
		return ;
	if (size == 1)
	{
		pa(a, b, ops);
		return ;
	}
	if (size == 2)
	{
		if (!(*b)->next)
			return ;
		if ((*b)->number < (*b)->next->number)
			sb(b, ops);
		pa(a, b, ops);
		pa(a, b, ops);
		return ;
	}
	pushed = partition_b(a, b, size, ops);
	quick_sort_a(a, b, pushed, ops);
	quick_sort_b(a, b, size - pushed, ops);
}

int	larger_value(t_stack *current2, int current1_val, int size)
{
	int	count;

	count = 0;
	while (size-- && current2)
	{
		if (current1_val < current2 ->number)
			count++;
		current2 = current2 -> next;
	}
	return (count);
}
