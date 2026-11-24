/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:58:59 by amalsaka          #+#    #+#             */
/*   Updated: 2026/09/27 12:17:23 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	joined = malloc(i + j + 1);
	if (!joined)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		joined[i++] = s2[j];
		j++;
	}
	joined[i] = '\0';
	return (joined);
}
/*
#include <stdio.h>
int	main(void)
{
	if(ft_strjoin(NULL,NULL) == NULL)
	printf("we caught it");
	else
		printf("oops");
}*/
