/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:55:59 by ajordan-          #+#    #+#             */
/*   Updated: 2022/01/28 14:01:30 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_pb(int *stack_a, int *stack_b)
{
	int	tmp;
	int	tmp2;
	int	size_a;
	int	size_b;
	int	i;

	if (stack_a[0] == '\0')
		return ;
	size_a = ft_stack_len(stack_a);
	size_b = ft_stack_len(stack_b);
	tmp = stack_b[0];
	stack_b[0] = stack_a[0];
	while (size_b > 1)
	{
		tmp2 = stack_b[size_b - 1];
		stack_b[size_b] = tmp2;
		size_b--;
	}
	if (size_b >= 1)
		stack_b[1] = tmp;
	i = 0;
	while (++i < size_a)
		stack_a[i - 1] = stack_a[i];
	stack_a[i - 1] = '\0';
	ft_printf("pb\n");
}

void	ft_pa(int *stack_b, int *stack_a)
{
	int	tmp;
	int	tmp2;
	int	size_a;
	int	size_b;
	int	i;

	if (stack_b[0] == '\0')
		return ;
	size_a = ft_stack_len(stack_a);
	size_b = ft_stack_len(stack_b);
	tmp = stack_a[0];
	stack_a[0] = stack_b[0];
	while (size_a > 1)
	{
		tmp2 = stack_a[size_a - 1];
		stack_a[size_a] = tmp2;
		size_a--;
	}
	if (size_a >= 1)
		stack_a[1] = tmp;
	i = 0;
	while (++i < size_b)
		stack_b[i - 1] = stack_b[i];
	stack_b[i - 1] = '\0';
	ft_printf("pa\n");
}
