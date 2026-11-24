/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_print2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 10:53:19 by amalsaka          #+#    #+#             */
/*   Updated: 2026/11/17 10:55:03 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	pa(t_stack **a, t_stack **b, int *ops)
{
	push(a, b);
	write(1, "pa\n", 3);
	ops[3]++;
}

void	pb(t_stack **a, t_stack **b, int *ops)
{
	push(b, a);
	write(1, "pb\n", 3);
	ops[4]++;
}

void	rra(t_stack **a, int *ops)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
	ops[8]++;
}

void	rrb(t_stack **b, int *ops)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
	ops[9]++;
}

void	rrr(t_stack **a, t_stack **b, int *ops)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 3);
	ops[10]++;
}
