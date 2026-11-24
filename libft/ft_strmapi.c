/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:28:37 by amalsaka          #+#    #+#             */
/*   Updated: 2026/09/27 10:54:55 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		str_len;
	char	*res;
	int		i;

	if (!s || !f)
		return (NULL);
	str_len = 0;
	while (s[str_len])
		str_len++;
	res = malloc(str_len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < str_len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*
char toup(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
#include <stdio.h>
int	main(void)
{
	char *s = "hello";
	printf("%s\n", ft_strmapi(s, toup));
}*/
