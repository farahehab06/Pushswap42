/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 13:33:13 by amalsaka          #+#    #+#             */
/*   Updated: 2026/10/20 14:03:59 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	ft_putnbr(int n)
{
	long	nb;
	int		count;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		count++;
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		count = count + ft_putnbr(nb / 10);
	count = count + ft_putchar((nb % 10) + '0');
	return (count);
}

int	ft_ptr(void *p, char *base)
{
	int	count;

	count = 0;
	if (!p)
		return (write(1, "(nil)", 5));
	count = count + (write(1, "0x", 2));
	count = count + ft_itoa_base((unsigned long) p, base);
	return (count);
}

int	args_check(char c, va_list *args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(*args, char *)));
	else if (c == 'i' || c == 'd')
		return (ft_putnbr(va_arg(*args, int)));
	else if (c == 'X')
		return (ft_itoa_base(va_arg(*args, unsigned int), "0123456789ABCDEF"));
	else if (c == 'x')
		return (ft_itoa_base(va_arg(*args, unsigned int), "0123456789abcdef"));
	else if (c == 'u')
		return (ft_itoa_base(va_arg(*args, unsigned int), "0123456789"));
	else if (c == 'p')
		return (ft_ptr(va_arg(*args, void *), "0123456789abcdef"));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	parse(const char *s, va_list *args)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1] == '\0')
			return (-1);
		if (s[i] == '%' && inside(s[i + 1], "csdipuXx%"))
		{
			i++;
			count = count + args_check(s[i], args);
		}
		else
			count = count + ft_putchar(s[i]);
		i++;
	}
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;

	if (s == NULL)
		return (-1);
	va_start(args, s);
	count = parse(s, &args);
	va_end(args);
	return (count);
}
