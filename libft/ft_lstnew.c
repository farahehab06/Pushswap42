/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:29:31 by amalsaka          #+#    #+#             */
/*   Updated: 2026/10/03 10:10:07 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}
/*
#include <stdio.h>
int	main(void)
{
	t_list *h;
	t_list b;
	t_list *z;
	int a = 10;
	int bb = 20;
	int zz = 30;
	h = ft_lstnew(&a);
	b.content = &bb;
	z = ft_lstnew(&zz);
	h->next =&b;
	h->next->next = z;
	h->next->next->next = NULL;
	//h->next->next = NULL;
	while (h)
	{

		printf("%d\n", *(int*)h->content);
		h = h->next;
	}
}*/
