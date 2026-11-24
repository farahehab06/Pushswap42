/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 11:19:51 by amalsaka          #+#    #+#             */
/*   Updated: 2026/09/28 18:26:53 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		i--;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
int     main(void)
{
        char *str = "abcd";
        char *str2 = "abcd";
        printf("%d\n", ft_strncmp(str,str2,4));
        printf("%d", strncmp(str, str2, 4));
}


*/
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_strncmp("abcz","abcc", 4));
	printf("%d\n",strncmp("abcz","abcc", 4));
}*/
