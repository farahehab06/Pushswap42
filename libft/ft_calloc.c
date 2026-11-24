/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 10:22:59 by amalsaka          #+#    #+#             */
/*   Updated: 2026/10/01 10:18:17 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char		*res;
	size_t		i;
	size_t		total;
	size_t		max;

	max = (size_t)-1;
	if (nmemb != 0 && size > max / nmemb)
		return (NULL);
	total = nmemb * size;
	if (total == 0)
		return (malloc(0));
	res = malloc(total);
	if (!res)
		return (NULL);
	i = 0;
	while (i < total)
	{
		res[i] = 0;
		i++;
	}
	return (res);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *a;
	char *b;
	//a = calloc(4,sizeof(char));//
	free(ft_calloc(0,4));
}*/
