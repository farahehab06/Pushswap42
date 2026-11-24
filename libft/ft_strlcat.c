/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 10:41:32 by amalsaka          #+#    #+#             */
/*   Updated: 2026/10/01 09:49:42 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	slen;
	size_t	dlen;

	i = 0;
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (size <= dlen)
		return (size + slen);
	while (src[i] && i < size - dlen - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (slen + dlen);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int     main(void)
{
        char src[] = "helo this ia test";
        char dest[100] = "hel123456";
        char dest1[100] = "hel123456";
       printf("%zu\n",ft_strlcat(dest,"",10));
      // printf("%zu", strlcat(dest1, "" ,10));
}*/
