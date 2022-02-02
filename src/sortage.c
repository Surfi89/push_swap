/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortage.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:16:30 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/02 15:37:08 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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

void	ft_sort_small(int *stack_a, int *stack_b, int size)
{
	int	i;
	int	low_pos;
	int	size2;

	i = 0;
	size2 = size;
	while (size2 - i > 3)
	{
		low_pos = ft_lowest_num(stack_a, size);
		ft_move_to_top(stack_a, low_pos, size);
		ft_pb(stack_a, stack_b, size, i);
		i++;
		size--;
	}
	ft_sort_three(stack_a, size);
	size = size2;
	while (i > 0)
	{
		ft_pa(stack_b, stack_a);
		i--;
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
	}
	return (0);
}
