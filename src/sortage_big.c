/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortage_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 00:50:27 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/09 09:50:33 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include <stdlib.h>

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

void	ft_index(int *stack_a, int size)
{
	int	i;
	int	*tmp_stack;
	int	j;

	tmp_stack = malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		tmp_stack[i] = stack_a[i];
		i++;
	}
	ft_sort_tmp(tmp_stack, size);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{	
			if (tmp_stack[j] == stack_a[i])
				stack_a[i] = j;
			j++;
		}
		i++;
	}
	free (tmp_stack);
}

/*void	ft_push_to_a(int *stack_a, int *stack_b, int size_a, int size_b)
{
	int	high_pos;

	while (size_b > 0)
	{
		high_pos = ft_highest_num(stack_b, size_b);
		ft_move_to_top_b(stack_b, high_pos, size_b);
		pa(stack_a, stack_b, size_a, size_b);
		size_a++;
		size_b--;
	}
}*/
