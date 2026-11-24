/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:29:19 by amalsaka          #+#    #+#             */
/*   Updated: 2026/11/20 16:11:09 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	complex_sort(t_stack **a, t_stack **b, int *ops)
{
	int	size;

	size = stack_size(*a);
	quick_sort_a(a, b, size, ops);
	return (3);
}

int	push_swap(t_stack **a, t_stack **b, int selector, int *ops)
{
	double	disorder;

	disorder = calc(*a);
	ft_bzero(ops, sizeof(int) * 11);
	if (is_sorted(*a))
		return (0);
	else
	{
		if (selector == 1)
			selection_sort(a, b, ops);
		else if (selector == 2)
			k_sort(a, b, ops);
		else if (selector == 3)
			complex_sort(a, b, ops);
		else if (selector == 4 || selector == 0)
		{
			if (disorder < 0.2)
				return (selection_sort(a, b, ops));
			else if (disorder >= 0.2 && disorder < 0.5)
				return (k_sort(a, b, ops));
			else if (disorder >= 0.5)
				return (complex_sort(a, b, ops));
		}
	}
	return (100);
}

void	bench(int *ops, double disorder, int selector, int type)
{
	char	*s;

	s = NULL;
	if (selector == 1)
		s = "Simple / O(n^2)";
	else if (selector == 2)
		s = "Medium / O(n√n)";
	else if (selector == 3)
		s = "Complex / O(nlogn)";
	else if (selector == 4 || selector == 0)
	{
		if (type == 1 || type == 0)
			s = "Adaptive / O(n^2)";
		else if (type == 2)
			s = "Adaptive / O(n√n)";
		else if (type == 3)
			s = "Adaptive / O(nlogn)";
	}
	ft_printf("[bench] disorder: ");
	print_disorder(disorder);
	ft_printf("[bench] strategy: %s\n[bench] total_ops: %d\n", s, opss(ops));
	ft_printf("[bench] sa: %d sb: %d ss: %d pa: %d pb: %d\n", ops[0],
		ops[1], ops[2], ops[3], ops[4]);
	ft_printf("[bench] ra: %d rb: %d rr: %d rra: %d rrb: %d rrr: %d\n", ops[5],
		ops[6], ops[7], ops[8], ops[9], ops[10]);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	double	disorder;
	int		selector[3];
	int		ops[11];

	a = NULL;
	b = NULL;
	ft_bzero(selector, sizeof(int) * 3);
	if (ac < 2)
		return (0);
	while (ac > 1 && get_option(av[1], selector))
	{
		av++;
		ac--;
	}
	if (ac < 2)
		return (write_error());
	if (valid(ac, av, &a) == 0)
		return (write_error());
	disorder = calc(a);
	selector [2] = push_swap(&a, &b, selector[0], ops);
	if (selector [1] == 1)
		bench(ops, disorder, selector[0], selector[2]);
	return (free_both_stacks(&a, &b));
}
