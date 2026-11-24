/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 09:50:18 by amalsaka          #+#    #+#             */
/*   Updated: 2026/10/01 10:02:30 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*d;
	unsigned const char		*s;
	size_t					i;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char s1[]= "";
	char s2[100] = "abcdef";
	char s3[100] = "abcdef";
	//printf("%s\n", s2);
	ft_memmove(s2 , s2 + 1, 4 );
	memmove(s3  ,s3+1,4);	
	//memcpy(s3 + 8,s3, 13);
	//printf("%s\n", s2);
	printf("%s\n", s3);
}*/
