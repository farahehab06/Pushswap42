/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:21:24 by amalsaka          #+#    #+#             */
/*   Updated: 2026/09/28 18:12:21 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>
int     main(void)
{
        t_list *a,*b,*c,*d;
        a = ft_lstnew("ok1");
        b = ft_lstnew("ok2");
        c = ft_lstnew("ok3");
        d = ft_lstnew("ok4");
        a ->next = b;
        b ->next = c;
        c ->next = d;
        d ->next = NULL;
        printf("%s ", (char *)ft_lstlast(a)->content);
}*/
