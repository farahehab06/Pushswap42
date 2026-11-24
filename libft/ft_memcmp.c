/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 10:04:36 by amalsaka          #+#    #+#             */
/*   Updated: 2026/10/03 09:43:28 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dest, const void *src, size_t n)
{
	const unsigned char	*d;
	const unsigned char	*s;
	size_t				i;

	d = (const unsigned char *) dest;
	s = (const unsigned char *) src;
	i = 0;
	while (i < n)
	{
		if (d[i] != s[i])
			return (d[i] - s[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *s ="abc";
	char *d ="abz";
	//printf("%d\n", ft_memcmp(d,s,1));
	printf("%d\n", memcmp(d,s,1));
}*/
