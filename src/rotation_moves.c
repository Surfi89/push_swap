/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation_moves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:47:38 by ajordan-          #+#    #+#             */
/*   Updated: 2022/01/28 14:02:51 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_ra(int *stack_a)
{
	int	tmp;
	int	size;
	int	i;

	i = 0;
	tmp = stack_a[i];
	size = ft_stack_len(stack_a);
	i++;
	while (i < size)
	{
		stack_a[i - 1] = stack_a[i];
		i++;
	}
	stack_a[i - 1] = tmp;
	ft_printf("ra\n");
}

void	ft_rb(int *stack_b)
{
	int	tmp;
	int	size;
	int	i;

	i = 0;
	tmp = stack_b[i];
	size = ft_stack_len(stack_b);
	i++;
	while (i < size)
	{
		stack_b[i - 1] = stack_b[i];
		i++;
	}
	stack_b[i - 1] = tmp;
	ft_printf("rb\n");
}

void	ft_rr(int *stack_a, int *stack_b)
{
	int	tmp;
	int	size_a;
	int	size_b;
	int	i;

	i = 0;
	tmp = stack_a[i];
	size_a = ft_stack_len(stack_a);
	size_b = ft_stack_len(stack_b);
	while (++i < size_a)
		stack_a[i - 1] = stack_a[i];
	stack_a[i - 1] = tmp;
	i = 0;
	tmp = stack_b[i];
	while (++i < size_b)
		stack_b[i - 1] = stack_b[i];
	stack_b[i - 1] = tmp;
	ft_printf("rr\n");
}
