/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:16:47 by amalsaka          #+#    #+#             */
/*   Updated: 2026/10/03 10:05:23 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	counter;

	counter = 0;
	while (lst)
	{
		lst = lst->next;
		counter++;
	}
	return (counter);
}
/*
#include <stdio.h>
int	main(void)
{
	t_list *a,*b,*c,*d, *z;
	z = NULL;
	a = ft_lstnew("ok1");
	b = ft_lstnew("ok2");
	c = ft_lstnew("ok3");
	d = ft_lstnew("ok4");
	a ->next = b;
	b ->next = c;
	c ->next = d;
	d ->next = NULL;
	printf("%d ", ft_lstsize(a));
}*/
