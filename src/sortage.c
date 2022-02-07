/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortage.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:16:30 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/07 01:58:59 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_check_sorted(int *stack, int size)
{
	int	i;

	i = 1;
	while (i < size)
	{
		if (stack[i - 1] > stack[i])
			return (0);
		i++;
	}
	return (1);
}

void	ft_sort_three(int *stack, int size)
{
	if (stack[0] > stack[1] && stack[0] < stack[2] && stack[1] < stack[2])
		ft_sa(stack);
	if (stack[0] > stack[1] && stack[0] > stack[2] && stack[1] > stack[2])
	{
		ft_sa(stack);
		ft_rra(stack, size);
	}
	if (stack[0] > stack[1] && stack[0] > stack[2] && stack[1] < stack[2])
		ft_ra(stack, size);
	if (stack[0] < stack[1] && stack[0] < stack[2] && stack[1] > stack[2])
	{
		ft_sa(stack);
		ft_ra(stack, size);
	}
	if (stack[0] < stack[1] && stack[0] > stack[2] && stack[1] > stack[2])
		ft_rra(stack, size);
}

void	ft_sort_small(int *stack_a, int *stack_b, int size_a)
{
	int	size_b;
	int	low_pos;
	int	tmp;
	int	i;

	size_b = 0;
	tmp = size_a;
	while (tmp - size_b > 3)
	{
		low_pos = ft_lowest_num(stack_a, size_a);
		ft_move_to_top(stack_a, low_pos, size_a);
		ft_pb(stack_a, stack_b, size_a, size_b);
		size_a--;
		size_b++;
	}
	ft_sort_three(stack_a, size_a);
	i = 0;
	while (tmp - i > 3)
	{
		ft_pa(stack_b, stack_a, size_a, size_b);
		size_a++;
		size_b--;
		i++;
	}
}

int	ft_sort(int *stack_a, int *stack_b, int size)
{
	if (ft_check_sorted(stack_a, size) == 0)
	{
		if (size == 2)
			ft_sa(stack_a);
		else if (size == 3)
			ft_sort_three(stack_a, size);
		else if (size > 3 && size < 9)
			ft_sort_small(stack_a, stack_b, size);
		else
			ft_sort_big(stack_a, stack_b, size);
	}
	return (0);
}
