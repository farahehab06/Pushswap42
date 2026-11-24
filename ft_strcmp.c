/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:27:11 by amalsaka          #+#    #+#             */
/*   Updated: 2026/11/17 13:26:38 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	not_seen(int c)
{
	if (c == 1)
		return (0);
	else if (c == 2)
		return (0);
	else if (c == 3)
		return (0);
	else if (c == 4)
		return (0);
	return (1);
}

int	get_option(char *str, int *flag)
{
	if (ft_strcmp(str, "--simple") == 0 && not_seen(flag[0]) == 1)
		return (flag[0] = 1);
	else if (ft_strcmp(str, "--medium") == 0 && not_seen(flag[0]) == 1)
		return (flag[0] = 2);
	else if (ft_strcmp(str, "--complex") == 0 && not_seen(flag[0]) == 1)
		return (flag[0] = 3);
	else if (ft_strcmp(str, "--adaptive") == 0 && not_seen(flag[0]) == 1)
		return (flag[0] = 4);
	else if (ft_strcmp(str, "--bench") == 0 && not_seen(flag[1]) == 1)
		return (flag[1] = 1);
	return (0);
}
