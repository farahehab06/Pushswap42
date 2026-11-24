/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 11:50:31 by amalsaka          #+#    #+#             */
/*   Updated: 2026/09/28 18:19:10 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (little[i] == '\0')
		return ((char *)(big));
	while (big[i] && i < len)
	{
		if (big[i] == little[j])
		{
			i++;
			j++;
			if (little[j] == '\0')
				return ((char *)(&big[i - j]));
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	return (0);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int     main(void)
{
        //if ( ac == 5)
        //{

        char str[] = "heloworlde how is 42";
        char str1[] = "helo";
        char *p = ft_strnstr(str,str1, 4);
        char *z = strnstr(str,str1, 4);
        //printf("%s\n", ft_strstr(av[1],av[2]));
        //printf("%s", strstr(av[3],av[4]));
        printf("%s\n", p);
        printf("%s", z);
        //}
}
*/
