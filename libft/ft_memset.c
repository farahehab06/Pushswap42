/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 15:19:55 by amalsaka          #+#    #+#             */
/*   Updated: 2026/10/01 09:57:52 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*t;
	size_t			i;

	i = 0;
	t = (unsigned char *)s;
	while (i < len)
	{
		t[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

/*
#include <stdio.h>
int	main(void)
{
	char s1[10] = "hello";
	char s2[10] = "hello";
	printf("%s \n", (char*)ft_memset(s1,65, 4));
	printf("%s ", (char *)memset(s2,65,4));
}*/
