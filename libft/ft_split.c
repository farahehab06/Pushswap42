/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 10:27:15 by amalsaka          #+#    #+#             */
/*   Updated: 2026/10/27 14:13:51 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*dupe(char const *s, char c)
{
	int		i;
	char	*res;
	int		len;

	i = 0;
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

static void	*freee(char **res, int i)
{
	while (i > 0)
		free(res[--i]);
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**res;

	if (!s)
		return (NULL);
	i = 0;
	res = malloc(sizeof(char *) * (countwords(s, c) + 1));
	if (!res)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			res[i] = dupe(s, c);
			if (res[i] == NULL)
				return (freee(res, i));
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	res[i] = NULL;
	return (res);
}
/*
#include <stdio.h>
int     main(void)
{
        char *str = "split these words one at a time";
        char **res = ft_split(str, ' ');
        int i = 0;
		if (res == NULL)
		printf("its a null");
		else
			printf("we dont know");
        while(res[i])
        printf("%s\n", res[i++]);     
        i = 0;
	while(res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
}*/
