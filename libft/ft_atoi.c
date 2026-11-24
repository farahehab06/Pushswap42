/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 09:19:40 by amalsaka          #+#    #+#             */
/*   Updated: 2026/09/28 18:13:20 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	whitespace(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	i = whitespace(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 - (str[i] - '0');
		i++;
	}
	return (res * -sign);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*str = "-2147483648";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}*/
