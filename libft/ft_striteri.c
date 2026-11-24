/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 11:13:21 by amalsaka          #+#    #+#             */
/*   Updated: 2026/09/28 18:23:09 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	len;

	len = 0;
	while (s[len])
		len++;
	i = 0;
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	lo(unsigned int i, char *s)
{
	if(*s >= 65 && *s <= 97)
		*s = *s + 32;
	
}
#include <stdio.h>
int	main(void)
{
	int	i;
	char s[] = "TEST";
	ft_striteri(s,lo);
	printf("%s\n", s);
}
*/	
