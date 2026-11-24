/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:08:37 by amalsaka          #+#    #+#             */
/*   Updated: 2026/10/01 10:07:57 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char) c)
			return ((void *)(&p[i]));
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *s ="PhoeniAnd";
	printf("%s\n",(char *)memchr(s, 65, 7));
	printf("%s\n",(char *)ft_memchr(s,65,7));
}*/
