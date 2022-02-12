/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortage.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:16:30 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/12 02:02:04 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_check_sorted(int *pile, int size, int order)
{
	int	i;

	if (order == ASCENDING)
	{
		i = 1;
		while (i < size)
		{
			if (pile[i - 1] > pile[i])
				return (0);
			i++;
		}
		return (1);
	}
	else
	{
		i = 1;
		while (i < size)
		{
			if (pile[i - 1] < pile[i])
				return (0);
			i++;
		}
		return (1);
	}
}

void	ft_sort_three_a(t_stacks *s)
{
	if (s->a[0] > s->a[1] && s->a[0] < s->a[2] && s->a[1] < s->a[2])
		ft_sa(s);
	if (s->a[0] > s->a[1] && s->a[0] > s->a[2] && s->a[1] > s->a[2])
	{
		ft_sa(s);
		ft_rra(s);
	}
	if (s->a[0] > s->a[1] && s->a[0] > s->a[2] && s->a[1] < s->a[2])
		ft_ra(s);
	if (s->a[0] < s->a[1] && s->a[0] < s->a[2] && s->a[1] > s->a[2])
	{
		ft_sa(s);
		ft_ra(s);
	}
	if (s->a[0] < s->a[1] && s->a[0] > s->a[2] && s->a[1] > s->a[2])
		ft_rra(s);
}

void	ft_sort_small(t_stacks *stack)
{
	int	low_pos;
	int	tmp;
	int	i;

	tmp = stack->size_a;
	while (tmp - stack->size_b > 3)
	{
		low_pos = ft_lowest_num(stack);
		ft_move_to_top_a(stack, low_pos);
		ft_pb(stack);
	}
	ft_sort_three_a(stack);
	i = 0;
	while (tmp - i > 3)
	{
		ft_pa(stack);
		i++;
	}
}

int	ft_sort(t_stacks *stack, int size)
{
	if (ft_check_sorted(stack->a, stack->size_a, ASCENDING) == 0)
	{
		if (size == 2)
			ft_sa(stack);
		else if (size == 3)
			ft_sort_three_a(stack);
		else if (size > 3 && size < 9)
			ft_sort_small(stack);
		else
			ft_quicksort_a(stack, size);
	}
	return (0);
}
