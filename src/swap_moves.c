/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:50:12 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/02 14:03:23 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sa(int *stack_a)
{
	int	tmp;

	tmp = 0;
	tmp = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = tmp;
	ft_printf("sa\n");
}

void	ft_sb(int *stack_b)
{
	int	tmp;

	tmp = 0;
	tmp = stack_b[0];
	stack_b[0] = stack_b[1];
	stack_b[1] = tmp;
	ft_printf("sb\n");
}

void	ft_ss(int *stack_a, int *stack_b)
{
	int	tmp;

	tmp = 0;
	tmp = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = tmp;
	tmp = stack_b[0];
	stack_b[0] = stack_b[1];
	stack_b[1] = tmp;
	ft_printf("ss\n");
}
