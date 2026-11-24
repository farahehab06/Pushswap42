/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 15:15:41 by amalsaka          #+#    #+#             */
/*   Updated: 2026/11/18 15:23:43 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	free_both_stacks(t_stack **a, t_stack **b)
{
	free_stack(a);
	free_stack(b);
	return (0);
}

t_stack	*stack_last(t_stack *s)
{
	if (!s)
		return (NULL);
	while (s->next)
		s = s->next;
	return (s);
}

int	sqroot(int n)
{
	int	counter;

	counter = 0;
	while ((counter + 1) <= n / (counter + 1))
		counter++;
	return (counter);
}
