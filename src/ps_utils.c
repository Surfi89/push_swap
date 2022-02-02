/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:08:15 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/02 15:39:06 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_error(void)
{
	ft_printf("Error\n");
	exit (1);
}

int	ft_stack_len(int *stack)
{
	int	len;

	len = 0;
	while (stack[len])
		len++;
	return (len);
}

int	ft_lowest_num(int *stack_a, int size)
{
	int	i;
	int	low_pos;
	
	i = 1;
	low_pos = 0;
	while (i < size)
	{
		if (stack_a[i] < stack_a[low_pos])
			low_pos = i;
		i++;
	}
	return (low_pos);
}

void	ft_move_to_top(int *stack_a, int low_pos, int size)
{
	int	i;

	i = 0;
	if (low_pos == 0)
		return ;
	if (low_pos > size - low_pos)
	{
		while (i < size - low_pos)
		{	
			ft_rra(stack_a, size);
			i++;
		}
	}
	else
	{
		while (i < low_pos)
		{
			ft_ra(stack_a, size);
			i++;
		}
	}
}
