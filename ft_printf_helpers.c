/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helpers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:52:36 by amalsaka          #+#    #+#             */
/*   Updated: 2026/10/20 17:53:49 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	ft_putchar(char c)
{
	return (write(2, &c, 1));
}

int	ft_putstr(char *s)
{
	int	i;

	if (!s)
		return (write(2, "(null)", 6));
	i = 0;
	while (s[i])
		i++;
	write(2, s, i);
	return (i);
}

int	inside(char c, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_num_base(unsigned long n, unsigned int base)
{
	int	i;

	i = 1;
	while (n >= base)
	{
		n = n / base;
		i++;
	}
	return (i);
}

int	ft_itoa_base(unsigned long n, char *base)
{
	char	buff[20];
	int		len;
	int		og_len;
	int		i;

	i = 0;
	while (base[i])
		i++;
	len = ft_num_base(n, i);
	og_len = len;
	while (len)
	{
		len = len - 1;
		buff[len] = base[n % i];
		n = n / i;
	}
	write(2, buff, og_len);
	return (og_len);
}
