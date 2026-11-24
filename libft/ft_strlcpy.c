/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 10:23:39 by amalsaka          #+#    #+#             */
/*   Updated: 2026/10/01 09:43:14 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char const *src, size_t size)
{
	size_t	i;
	size_t	l;

	l = 0;
	i = 0;
	while (src[l])
		l++;
	if (size == 0)
		return (l);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (l);
}
/*
#include <bsd/string.h>
#include <stdio.h>
int     main(void)
{	char str[] = "";
        char str1[] = "gooddd";
       // size_t  size = ft_strlcpy(str1, str, 0);
	//printf("%zu\n", strlcpy(str1, str, 1));
        //printf("%zu\n", ft_strlcpy(str1,str, 1));
}*/
