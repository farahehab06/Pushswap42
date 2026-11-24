/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 11:02:17 by amalsaka          #+#    #+#             */
/*   Updated: 2026/09/22 13:54:29 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

/*
#include <ctype.h>
#include <stdio.h>

int     main(void)
{
        printf("%d\n", ft_tolower(96));
        printf("%d\n", tolower(96));
}*/
