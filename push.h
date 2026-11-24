/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:35:52 by amalsaka          #+#    #+#             */
/*   Updated: 2026/11/19 14:25:53 by amalsaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_H
# define PUSH_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

typedef struct s_node
{
	struct s_node	*next;
	int				number;
	int				rank;
}	t_stack;

int			sort_three(t_stack **a, int *ops);
void		b_a(t_stack **a, t_stack **b, int maxvalue, int *ops);
int			k_sort(t_stack **a, t_stack **b, int *ops);
void		a_b(t_stack **a, t_stack **b, int window, int *ops);
void		assign_ranks(t_stack *a);
int			sqroot(int n);
int			find_pos_max(t_stack **b, int maxvalue);
int			ft_strcmp(char *s1, char *s2);
int			push_atoi(char *s, int *number);
int			dupee(t_stack *s, int number);
int			valid(int ac, char **av, t_stack **a);
int			free_split(char **s, t_stack **a);
int			write_error(void);
int			stack_size(t_stack *a);
int			is_sorted(t_stack *a);
int			get_option(char *str, int *selector);
int			opss(int *ops);
int			ft_putchar(char c);
int			ft_putnbr(int c);
int			ft_itoa_base(unsigned long n, char *base);
int			inside(char c, char *s);
int			ft_putstr(char *s);
int			ft_printf(const char *s, ...);
int			larger_value(t_stack *current2, int current1_val, int size);
int			piviot_value(t_stack **a, int size);
int			partition_b(t_stack **a, t_stack **b, int size, int *ops);
int			partition_a(t_stack **a, t_stack **b, int size, int *ops);
void		free_stack(t_stack **a);
int			free_both_stacks(t_stack **a, t_stack **b);
int			selection_sort(t_stack **a, t_stack **b, int *ops);
void		swap(t_stack **a);
void		rotate(t_stack **a);
void		push(t_stack **a, t_stack **b);
void		reverse_rotate(t_stack **a);
void		quick_sort_a(t_stack **a, t_stack **b, int size, int *ops);
void		quick_sort_b(t_stack **a, t_stack **b, int size, int *ops);
void		ft_putnbr_fd(int n, int fd);
void		print_disorder(double disorder);
void		sa(t_stack **a, int *ops);
void		sb(t_stack **b, int *ops);
void		ss(t_stack **a, t_stack **b, int *ops);
void		ra(t_stack **a, int *ops);
void		rb(t_stack **b, int *ops);
void		rr(t_stack **a, t_stack **b, int *ops);
void		pa(t_stack **a, t_stack **b, int *ops);
void		pb(t_stack **a, t_stack **b, int *ops);
void		rra(t_stack **a, int *ops);
void		rrb(t_stack **b, int *ops);
void		rrr(t_stack **a, t_stack **b, int *ops);
t_stack		*stack_last(t_stack *s);
double		calc(t_stack *a);
#endif
