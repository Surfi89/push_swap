/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:50:45 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/09 14:52:10 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include <stdlib.h>

void	ft_sort_three_b(int *stack, int size)
{
	if (stack[0] < stack[1] && stack[0] > stack[2] && stack[1] > stack[2])
		ft_sb(stack);
		
	if (stack[0] < stack[1] && stack[0] < stack[2] && stack[1] < stack[2])
	{
		ft_sb(stack);
		ft_rrb(stack, size);
	}
	if (stack[0] < stack[1] && stack[0] < stack[2] && stack[1] > stack[2])
		ft_rb(stack, size);
	if (stack[0] > stack[1] && stack[0] > stack[2] && stack[1] < stack[2])
	{
		ft_sb(stack);
		ft_ra(stack, size);
	}
	if (stack[0] > stack[1] && stack[0] < stack[2] && stack[1] < stack[2])
		ft_rrb(stack, size);
}

int	ft_sort_small_b(int *stack_a, int *stack_b, int size_a int size_b)
{
	if (size_b == 1)
		ft_pa(stack_b, stack_a, size_a, size_b)
	if (size_b == 2)
	{
		if (stack_b[0] < stack_b[1])
		{
			ft_sb(stack_b);
			while ((size_a++) && (size_b--))
				ft_pa(stack_b, stack_a, size_a, size_b);
		}
	}
	else if (size == 3)
	{
		ft_sort_three_b(stack, size);
		while ((size_a++) && (size_b--))
			ft_pa(stack_b, stack_a, size_a, size_b);
	}
	return (0);
}

int	ft_get_mediane(int *pivot, int *stack, int size)
{
	int		*tmp_stack;
	int		i;

	tmp_stack = malloc(size * sizeof(int));
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

int	ft_quicksort_a(int *stack_a, int *stack_b, int size_a, int size_b)
{
	int	pivot;
	int	items;
	int	pushed_under;

	if (ft_check_sorted(stack_a, size_a, 0) == 1)
		return (1);
	items = size_a;
	if (size_a <= 3)
	{
		ft_sort(stack_a, stack_b, size_a);
		return (1);
	}
	pushed_under = 0;
	if (!pushed_under && !ft_get_mediane(&pivot, stack_a, size_a))
		return (0);
	while (size_a != items / 2 + items % 2)
	{
		if (stack_a[0] < pivot && (size_a--) && (size_b++))
			ft_pb(stack_a, stack_b, size_a, size_b);
		else if ((++pushed_under))
			ft_ra(stack_a, size_a);
	}
	while (items / 2 + items % 2 != size_a && pushed_under--)
		ft_rra(stack_a, size_a);
	return (ft_quicksort_a(stack_a, stack_b, size_a, size_b)
		&& ft_quicksort_b(stack_a, stack_b, size_a, size_b));
	return (1);
}

int	ft_quicksort_b(int *stack_a, int *stack_b, int size_a, int size_b)
{
	int	pivot;
	int	items;
	int	pushed_under;

	pushed_under = 0;
	if (!pushed_under && ft_check_sorted(stack_b, size_b, 1) == 1)
		while ((size_b--) && (size_a++))
			ft_pa(stack_b, stack_a, size_a, size_b);
	if (size_b <= 3)
	{
		ft_sort_small_b(stack_a, stack_b, size_a, size_b);
		return (1);
	}
	items = size_b;
	if (!ft_get_mediane(&pivot, stack_b, size_b))
		return (0);
	while (size_b != items / 2)
	{
		if (stack_b[0] >= pivot && size_a++ && size_b--)
			ft_pa(stack_b, stack_a, size_a, size_b);
		else if (++pushed_under)
			ft_rb(stack_b, size_b);
	}
	while (items / 2 != size_b && pushed_under--)
		ft_rrb(stack_b, size_b);
	return (ft_quicksort_a(stack_a, stack_b, size_a, size_b)
		&& ft_quicksort_b(stack_a, stack_b, size_a, size_b));
}
