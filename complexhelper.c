/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complexhelper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabuassa <fabuassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 13:03:53 by fabuassa          #+#    #+#             */
/*   Updated: 2026/11/21 16:14:24 by fabuassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	piviot_value(t_stack **a, int size)
{
	int		i;
	t_stack	*current1;

	if (!a || !*a || size <= 0)
		return (0);
	i = 0;
	current1 = *a;
	while (i < size && current1)
	{
		if (larger_value(*a, current1 -> number, size) == size - 1 - size / 2)
			return (current1 ->number);
		current1 = current1 ->next;
		i++;
	}
	return ((*a)-> number);
}

void	undorota_a(t_stack **a, int rotated, int full_stack, int *ops)
{
	if (!full_stack)
	{
		while (rotated-- > 0)
			rra(a, ops);
	}
}

int	partition_a(t_stack **a, t_stack **b, int size, int *ops)
{
	int	pushedto_b;
	int	rotated;
	int	full_stack;
	int	piviotval;

	piviotval = piviot_value(a, size);
	pushedto_b = 0;
	rotated = 0;
	full_stack = (size == stack_size(*a));
	while (size-- > 0 && *a)
	{
		if ((*a)-> number < piviotval)
		{
			pb(a, b, ops);
			pushedto_b++;
		}
		else
		{
			ra(a, ops);
			rotated++;
		}
	}
	undorota_a(a, rotated, full_stack, ops);
	return (pushedto_b);
}

void	undorota_b(t_stack **b, int rotated, int full_stack, int *ops)
{
	if (!full_stack)
	{
		while (rotated-- > 0)
			rrb(b, ops);
	}
}

int	partition_b(t_stack **a, t_stack **b, int size, int *ops)
{
	int	pushedto_a;
	int	rotated;
	int	full_stack;
	int	piviotval;

	piviotval = piviot_value(b, size);
	pushedto_a = 0;
	rotated = 0;
	full_stack = (size == stack_size(*b));
	while (size-- > 0 && *b)
	{
		if ((*b)-> number >= piviotval)
		{
			pa(a, b, ops);
			pushedto_a++;
		}
		else
		{
			rb(b, ops);
			rotated++;
		}
	}
	undorota_b(b, rotated, full_stack, ops);
	return (pushedto_a);
}
