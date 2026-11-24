/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 12:25:27 by amalsaka          #+#    #+#             */
/*   Updated: 2026/09/28 18:17:39 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char )c)
			return ((char *)(&s[i]));
		i++;
	}
	if (c == 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(&s[i]));
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	int c = 65;
	const char *s = "PhoenixAnddpower";
	printf("%s\n", ft_strchr(s, c));
	//printf("%s\n", strrchr(s, c));
}*/
