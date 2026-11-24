/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:38:36 by amalsaka          #+#    #+#             */
/*   Updated: 2026/09/29 11:55:07 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	del(void *c)
{
	if (!c)
		return ;
	free(c);
}
void	*ff(void *c)
{
	char *s = c;
	int i = 0;
	while (s[i])
	{
		if (s[i] >= 65 && s[i] <= 97)
			s[i] = s[i] + 32;
		i++;
	}
	s = c;
	return c;
}*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void(*del)(void*))
{
	t_list	*node;
	t_list	*new;
	void	*c;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		c = f(lst->content);
		if (c == NULL)
			return (ft_lstclear(&new, del), NULL);
		node = ft_lstnew(c);
		if (node == NULL)
		{
			del(c);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}
/*
#include <stdio.h>
void	print_lst(t_list *t)
{
	while(t)
	{
		printf("%s ", (char*) t->content);
		t = t->next;
	}
}
int	main(void)
{
	t_list *a,*b;
	a = ft_lstnew(ft_strdup("HELL"));
	b = ft_lstnew(ft_strdup("FISH"));
	a->next = b;
	b->next = NULL;
	t_list *t = ft_lstmap(a,ff,del);
	ft_lstclear(&t,del);
	free(a);
	free(b);
}
*/
