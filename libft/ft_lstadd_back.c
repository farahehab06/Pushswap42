/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:24:39 by amalsaka          #+#    #+#             */
/*   Updated: 2026/09/28 18:07:31 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*t;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	t = *lst;
	while (t->next != NULL)
		t = t->next;
	t->next = new;
}
/*
#include <stdio.h>
void	print_lst(t_list *a)
{
	while (a)
	{
		printf("%s ", (char *) a->content);
		a =a ->next;
	}
}
int     main(void)
{
        t_list *a,*b,*c,*d,*e;
	e = ft_lstnew("add");
        a = ft_lstnew("ok1");
        b = ft_lstnew("ok2");
        c = ft_lstnew("ok3");
        d = ft_lstnew("ok4");
        a ->next = b;
        b ->next = c;
        c ->next = d;
        d ->next = NULL;
	ft_lstadd_back(&a, e);
	print_lst(a);
        
}*/
