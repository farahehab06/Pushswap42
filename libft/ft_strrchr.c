/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 12:34:31 by amalsaka          #+#    #+#             */
/*   Updated: 2026/09/28 18:09:58 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (unsigned char )c)
			return ((char *)(&s[i]));
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int     main(void)
{
        int c = 65;
        const char *s = "PhAoenixAnddpower";
        printf("%s\n", ft_strrchr(s, c));
        //printf("%s\n", strrchr(s, c));
}
*/
