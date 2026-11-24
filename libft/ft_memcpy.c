/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 15:44:22 by amalsaka          #+#    #+#             */
/*   Updated: 2026/10/01 10:28:21 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *srcs, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;
	size_t				i;

	i = 0;
	s = (unsigned const char *)srcs;
	d = (unsigned char *)dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

#include <string.h>
int	main(void)
{
	char s[] ="this is a test";
	char d[100];
	char b[100];
	printf("%s\n", (char*)ft_memcpy(d,s,5));
	//ft_memcpy(b,s,0);
	//printf("%s\n%s\n",b,d);
}*/
