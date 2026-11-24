/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 14:26:05 by amalsaka          #+#    #+#             */
/*   Updated: 2026/09/28 18:29:19 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		i++;
	if (nb == 0)
		i = 1;
	while (nb != 0)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*res;

	nb = n;
	len = num(nb);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	if (nb == 0)
		res[0] = '0';
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	res[len] = '\0';
	len = len - 1;
	while (nb != 0)
	{
		res[len] = nb % 10 + '0';
		len = len - 1;
		nb = nb / 10;
	}
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n",ft_itoa(-2147483648));
}*/
