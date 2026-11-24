/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:27:20 by amalsaka          #+#    #+#             */
/*   Updated: 2026/11/20 16:10:46 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	free_split(char **s, t_stack **a)
{
	int	i;

	free_stack(a);
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (0);
}

int	write_error(void)
{
	write(2, "Error\n", 6);
	return (1);
}

void	free_stack(t_stack **a)
{
	t_stack	*t;

	if (!a || !*a)
		return ;
	while (*a)
	{
		t = (*a)->next;
		free(*a);
		*a = t;
	}
}

int	stack_size(t_stack *a)
{
	int	count;

	count = 0;
	while (a)
	{
		count++;
		a = a->next;
	}
	return (count);
}
