/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench_helpers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 16:05:31 by amalsaka          #+#    #+#             */
/*   Updated: 2026/11/19 13:41:56 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	print_disorder(double disorder)
{
	int	total;
	int	left;
	int	right;

	total = (int)(disorder * 10000);
	left = total / 100;
	right = total % 100;
	ft_putnbr_fd(left, 2);
	write(2, ".", 1);
	if (right < 10)
		write(2, "0", 1);
	ft_putnbr_fd(right, 2);
	write(2, "%\n", 2);
}

int	opss(int *ops)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < 11)
	{
		total = total + ops[i];
		i++;
	}
	return (total);
}
