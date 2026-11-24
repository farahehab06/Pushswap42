/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 13:50:08 by amalsaka          #+#    #+#             */
/*   Updated: 2026/09/28 14:55:40 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ff(void *c)
{
	char *s = c;
	int	i = 0;
	while(s[i])
	{
		if(s[i] >= 65 && s[i] <= 97)
			s[i] = s[i] + 32;
		i++;
	}
	s = c;
}*/
void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst ->next;
	}
}
/*
#include <stdio.h>
void print_lst(t_list *a)
{
	while (a)
	{
		printf("%s ",(char*) a->content);
		a = a->next;
	}
}
int	main(void)
{
	t_list *a = ft_lstnew(ft_strdup("HELLO"));
	ft_lstiter(a,ff);
	print_lst(a);
}
		
*/
