/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rot_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:53:15 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/03 11:54:30 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "../libft/inc/ft_printf.h"

void	ft_rra(int *stack_a, int size)
{
	int	tmp;
	int	i;

	i = size - 1;
	tmp = stack_a[i];
	while (i)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[i] = tmp;
	ft_printf("rra\n");
}

void	ft_rrb(int *stack_b, int size_b)
{
	int	tmp;
	int	i;

	i = size_b - 1;
	tmp = stack_b[i];
	while (i)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[i] = tmp;
	ft_printf("rrb\n");
}

void	ft_rrr(int *stack_a, int *stack_b, int size_a, int size_b)
{
	int	tmp;
	int	i;

	i = size_a - 1;
	tmp = stack_a[i];
	while (i)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[i] = tmp;
	i = size_b - 1;
	tmp = stack_b[i];
	while (i)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[i] = tmp;
	ft_printf("rrr\n");
}
