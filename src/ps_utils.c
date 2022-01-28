/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:08:15 by ajordan-          #+#    #+#             */
/*   Updated: 2022/01/28 14:25:12 by ajordan-         ###   ########.fr       */
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

void	ft_sort_3(int *a)
{
	if (a[0] > a[1] && a[0] < a[2] && a[1] < a[2])
		ft_sa(a);
	if (a[0] > a[1] && a[0] > a[2] && a[1] > a[2])
	{
		ft_sa(a);
		ft_rra(a);
	}
	if (a[0] > a[1] && a[0] > a[2] && a[1] < a[2])
		ft_ra(a);
	if (a[0] < a[1] && a[0] < a[2] && a[1] > a[2])
	{
		ft_sa(a);
		ft_ra(a);
	}
	if (a[0] < a[1] && a[0] > a[2] && a[1] > a[2])
		ft_rra(a);
}

int	ft_sort(int *stack_a, int size)
{
	if (ft_check_sorted(stack_a, size) == 0)
	{
		if (size == 2)
			ft_sa(stack_a);
		else if (size == 3)
			ft_sort_3(stack_a);
	}
	return (0);
}
