/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 12:25:41 by amalsaka          #+#    #+#             */
/*   Updated: 2026/09/27 13:00:35 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	inside(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = 0;
	i = 0;
	while (s1[start] && inside(s1[start], set))
		start++;
	while (s1[end])
		end++;
	while (end > start && inside(s1[end - 1], set))
		end--;
	res = malloc(end - start + 1);
	if (!res)
		return (NULL);
	while (start < end)
		res[i++] = s1[start++];
	res[i] = '\0';
	return (res);
}
/*

#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strtrim("thisis a testthisokok this","this"));
}*/
