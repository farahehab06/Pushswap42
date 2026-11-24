/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:52:16 by amalsaka          #+#    #+#             */
/*   Updated: 2026/09/28 17:59:55 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	del(void *content)
{
	if (!content)
		return ;
	free(content);
}
*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*t;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		t = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = t;
	}
	*lst = NULL;
}
/*
#include <stdio.h>
void	print_lst(t_list *a)
{
	while(a)
	{
		printf("%s ", (char *)a->content);
		a = a->next;
	}
}
int	main(void)
{
	t_list *a,*b,*c;
	a = ft_lstnew(ft_strdup("hell1"));
	b = ft_lstnew(ft_strdup("hello2"));
	c = ft_lstnew(ft_strdup("hello3"));
	a ->next = b;
	b ->next = c;
	c ->next = NULL;
	print_lst(a);
	ft_lstclear(&a,del);
}*/
