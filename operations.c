/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 16:05:52 by amalsaka          #+#    #+#             */
/*   Updated: 2026/11/19 14:09:24 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	swap(t_stack **a)
{
	t_stack	*second;

	if (!*a || !(*a)->next)
		return ;
	second = (*a)->next;
	(*a)->next = second->next;
	second ->next = *a;
	*a = second;
}

void	rotate(t_stack **a)
{
	t_stack	*first;

	if (!*a || !(*a)->next)
		return ;
	first = *a;
	*a = first ->next;
	first ->next = NULL;
	(stack_last(*a))->next = first;
}

void	push(t_stack **dst, t_stack **src)
{
	t_stack	*temp;

	if (!*src)
		return ;
	temp = *src;
	*src = temp->next;
	temp->next = *dst;
	*dst = temp;
}

void	reverse_rotate(t_stack **a)
{
	t_stack	*prev;
	t_stack	*last;

	if (!*a || !(*a)->next)
		return ;
	prev = NULL;
	last = *a;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *a;
	*a = last;
}

void	sa(t_stack **a, int *ops)
{
	swap(a);
	write(1, "sa\n", 3);
	ops[0] = ops[0] + 1;
}
