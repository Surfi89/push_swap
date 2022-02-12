/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:08:15 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/12 02:19:24 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "../libft/inc/ft_printf.h"
#include <stdlib.h>

void	ft_error(void)
{
	ft_printf("Error\n");
	exit (1);
}

int	ft_lowest_num(t_stacks *stack)
{
	int	i;
	int	low_pos;

	i = 1;
	low_pos = 0;
	while (i < stack->size_a)
	{
		if (stack->a[i] < stack->a[low_pos])
			low_pos = i;
		i++;
	}
	return (low_pos);
}

void	ft_move_to_top_a(t_stacks *stack, int low_pos)
{
	int	i;

	i = 0;
	if (low_pos == 0)
		return ;
	if (low_pos > stack->size_a - low_pos)
	{
		while (i < stack->size_a - low_pos)
		{	
			ft_rra(stack);
			i++;
		}
	}
	else
	{
		while (i < low_pos)
		{
			ft_ra(stack);
			i++;
		}
	}
}

void	ft_sort_tmp(int *tmp_stack, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tmp_stack[i] > tmp_stack[j])
			{
				tmp = tmp_stack[i];
				tmp_stack[i] = tmp_stack[j];
				tmp_stack[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
