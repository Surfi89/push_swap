/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:50:45 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/12 18:05:47 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include <stdlib.h>

void	ft_quicksort_3(t_stacks *stack, int len)
{
	if (len == 3 && stack->size_a == 3)
		ft_sort_three_a(stack);
	else if (len == 2)
	{
		if (stack->a[0] > stack->a[1])
			ft_sa(stack);
	}
	else if (len == 3)
	{
		while (len != 3 || !(stack->a[0] < stack->a[1]
					&& stack->a[1] < stack->a[2]))
			if (len == 3 && stack->a[0] > stack->a[1] && stack->a[2])
				ft_sa(stack);
			else if (len == 3 && !(stack->a[2] > stack->a[0]
						&& stack->a[2] > stack->a[1]))
			{
				ft_pb(stack);
				len--;
			}
			else if (stack->a[0] > stack->a[1])
				ft_sa(stack);
			else if (len++)
				ft_pa(stack);
	}
}

int	ft_sort_small_b(t_stacks *s, int len)
{
	if (len == 1)
		ft_pa(s);
	else if (len == 2)
	{
		if (s->b[0] < s->b[1])
			ft_sb(s);
		while (len--)
			ft_pa(s);
	}
	else if (len == 3)
	{
		while (len || !(s->a[0] < s->a[1] && s->a[1] < s->a[2]))
		{
			if (len == 1 && s->a[0] > s->a[1])
				ft_sa(s);
			else if (len == 1 || (len >= 2 && s->b[0] > s->b[1])
					|| (len == 3 && s->b[0] > s->b[2]))
			{
				ft_pa(s);
				len--;
			}
			else
				ft_sb(s);
		}
	}
	return (0);
}

int	ft_get_mediane(int *pivot, int *stack, int size)
{
	int		*tmp_stack;
	int		i;

	tmp_stack = (int *)malloc(size * sizeof(int));
	if (!tmp_stack)
		return (0);
	i = 0;
	while (i < size)
	{
		tmp_stack[i] = stack[i];
		i++;
	}
	ft_sort_tmp(tmp_stack, size);
	*pivot = tmp_stack[size / 2];
	free(tmp_stack);
	return (1);
}

int	ft_quicksort_a(t_stacks *stack, int len)
{
	int	pivot;
	int	items;
	int	pushed_under;
	
	if (ft_check_sorted(stack->a, len, ASCENDING) == 1)
		return (1);
	items = len;
	if (len <= 3)
	{
		ft_quicksort_3(stack, len);
		return (1);
	}
	pushed_under = 0;
	if (!pushed_under && !ft_get_mediane(&pivot, stack->a, len))
		return (0);
	while (len != items / 2 + items % 2)
	{
		if (stack->a[0] < pivot && (len--))
			ft_pb(stack);
		else if (++pushed_under)
			ft_ra(stack);
	}
	while (items / 2 + items % 2 != stack->size_a && pushed_under--)
		ft_rra(stack);
	return (ft_quicksort_a(stack, items / 2 + items % 2)
		&& ft_quicksort_b(stack, items / 2));
	return (1);
}

int	ft_quicksort_b(t_stacks *stack, int len)
{
	int	pivot;
	int	items;
	int	pushed;

	pushed = 0;
	if (!pushed && ft_check_sorted(stack->b, len, DESCENDING) == 1)
		while (len--)
			ft_pa(stack);
	if (len <= 3)
	{
		ft_sort_small_b(stack, len);
		return (1);
	}
	items = len;
	if (!ft_get_mediane(&pivot, stack->b, len))
		return (0);
	while (len != items / 2)
	{
		if (stack->b[0] >= pivot && len--)
			ft_pa(stack);
		else if (++pushed)
			ft_rb(stack);
	}
	while (items / 2 != stack->size_b && pushed--)
		ft_rrb(stack);
	return (ft_quicksort_a(stack, items / 2 + items % 2)
		&& ft_quicksort_b(stack, items / 2));
}
