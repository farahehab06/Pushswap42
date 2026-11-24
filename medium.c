/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 14:43:52 by amalsaka          #+#    #+#             */
/*   Updated: 2026/11/18 14:57:27 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	assign_ranks(t_stack *a)
{
	t_stack	*current;
	t_stack	*tmp;
	int		rank;

	current = a;
	while (current)
	{
		rank = 0;
		tmp = a;
		while (tmp)
		{
			if (tmp->number < current->number)
				rank++;
			tmp = tmp->next;
		}
		current->rank = rank;
		current = current->next;
	}
}

int	find_pos_max(t_stack **b, int max_value)
{
	t_stack	*tmp;
	int		pos;

	pos = 0;
	tmp = *b;
	while (tmp)
	{
		if ((tmp)->rank == max_value)
			return (pos);
		tmp = tmp -> next;
		pos++;
	}
	return (-1);
}

void	a_b(t_stack **a, t_stack **b, int window, int *ops)
{
	int	next;
	int	rank;

	next = 0;
	assign_ranks(*a);
	while (*a)
	{
		rank = (*a)->rank;
		if (rank <= next)
		{
			pb(a, b, ops);
			rb(b, ops);
			next++;
		}
		else if (rank <= window + next)
		{
			pb(a, b, ops);
			next++;
		}
		else
			ra(a, ops);
	}
}

int	k_sort(t_stack **a, t_stack **b, int *ops)
{
	int	max_value;
	int	window;
	int	size;

	size = stack_size(*a);
	if (size == 3)
		return (sort_three(a, ops));
	if (size == 5)
	{
		selection_sort(a, b, ops);
		return (2);
	}
	if (size <= 100)
		window = 1.3 * sqroot(size);
	else
		window = 1.4 * sqroot(size);
	a_b(a, b, window, ops);
	max_value = stack_size(*b) - 1;
	while (max_value >= 0)
	{
		b_a(a, b, max_value, ops);
		max_value--;
	}
	return (2);
}

void	b_a(t_stack **a, t_stack **b, int max_value, int *ops)
{
	int	pos;
	int	size;

	pos = find_pos_max(b, max_value);
	size = stack_size(*b);
	if (pos == -1)
		return ;
	if (pos <= size / 2)
	{
		while ((*b)->rank != max_value)
			rb(b, ops);
	}
	else
	{
		while ((*b)->rank != max_value)
			rrb(b, ops);
	}
	pa(a, b, ops);
}
