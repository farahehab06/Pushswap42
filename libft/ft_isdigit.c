/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 09:46:52 by amalsaka          #+#    #+#             */
/*   Updated: 2026/09/28 18:02:34 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("%d\n", ft_isdigit(50));
	printf("%d\n", isdigit(50));
}*/
