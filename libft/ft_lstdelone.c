/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:46:02 by amalsaka          #+#    #+#             */
/*   Updated: 2026/09/28 18:00:21 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	del(void *content);*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void	del(void *content)
{
	if (!content)
		return;
	free(content);
}
#include <stdio.h>
int	main(void)
{
	t_list *a;
	a = ft_lstnew(ft_strdup("hello"));
	printf("%s ", (char*) a->content);
	ft_lstdelone(a,del);
}
*/	
