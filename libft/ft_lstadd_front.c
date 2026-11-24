/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:57:11 by amalsaka          #+#    #+#             */
/*   Updated: 2026/09/28 18:01:56 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
void	print_lst(t_list *a)
{
	while(a)
	{
		printf("%s ", (char *) a->content);
		a = a -> next;
	}
}
int	main(void)
{
	t_list *a,*b,*c,*d;
	d = ft_lstnew("first");
	a = ft_lstnew("hello");
	b = ft_lstnew("ok");
	c = ft_lstnew("ok2");
	a -> next = b;
	b -> next = c;
	c -> next = NULL;
	ft_lstadd_front(&a, d);
	print_lst(a);
}*/
