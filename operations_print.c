/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_print.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 10:53:01 by amalsaka          #+#    #+#             */
/*   Updated: 2026/11/17 10:55:51 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	sb(t_stack **b, int *ops)
{
	swap(b);
	write(1, "sb\n", 3);
	ops[1]++;
}

void	ss(t_stack **a, t_stack **b, int *ops)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
	ops[2]++;
}

void	ra(t_stack **a, int *ops)
{
	rotate(a);
	write(1, "ra\n", 3);
	ops[5] = ops[5] + 1;
}

void	rb(t_stack **b, int *ops)
{
	rotate(b);
	write(1, "rb\n", 3);
	ops[6]++;
}

void	rr(t_stack **a, t_stack **b, int *ops)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
	ops[7]++;
}
