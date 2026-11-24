/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 13:32:29 by amalsaka          #+#    #+#             */
/*   Updated: 2026/11/19 14:11:49 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	is_sorted(t_stack *a)
{
	while (a && a->next)
	{
		if (a->number > a->next->number)
			return (0);
		a = a->next;
	}
	return (1);
}

int	find_min(t_stack *a)
{
	int	min;
	int	pos;
	int	i;

	pos = 0;
	i = 0;
	min = a->number;
	while (a)
	{
		if (min > a->number)
		{
			min = a->number;
			pos = i;
		}
		a = a->next;
		i++;
	}
	return (pos);
}

void	get_top(t_stack **a, int *ops)
{
	int	size;
	int	pos;
	int	i;

	i = 0;
	size = stack_size(*a);
	pos = find_min(*a);
	if (pos <= size / 2)
	{
		while (i < pos)
		{
			ra(a, ops);
			i++;
		}
	}
	else
	{
		while (i < size - pos)
		{
			rra(a, ops);
			i++;
		}
	}
}

int	sort_three(t_stack **s, int *ops)
{
	int	a;
	int	b;
	int	c;

	a = (*s)->number;
	b = (*s)->next->number;
	c = (*s)->next->next->number;
	if (a > b && c > b && c > a)
		sa(s, ops);
	else if (a > c && b > a && b > c)
		rra(s, ops);
	else if (a < b && b > c)
	{
		ra(s, ops);
		sa(s, ops);
		rra(s, ops);
	}
	else if (a > b && b > c)
	{
		ra(s, ops);
		sa(s, ops);
	}
	else if (a > b && b < c)
		ra(s, ops);
	return (2);
}

int	selection_sort(t_stack **a, t_stack **b, int *ops)
{
	if (stack_size(*a) == 3)
		sort_three(a, ops);
	while (*a && !is_sorted(*a))
	{
		get_top(a, ops);
		pb(a, b, ops);
	}
	while (*b)
		pa(a, b, ops);
	return (1);
}
