/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation_moves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:47:38 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/03 11:54:49 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "../libft/inc/ft_printf.h"

void	ft_ra(int *stack_a, int size)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = stack_a[i];
	i++;
	while (i < size)
	{
		stack_a[i - 1] = stack_a[i];
		i++;
	}
	stack_a[i - 1] = tmp;
	ft_printf("ra\n");
}

void	ft_rb(int *stack_b, int size_b)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = stack_b[i];
	i++;
	while (i < size_b)
	{
		stack_b[i - 1] = stack_b[i];
		i++;
	}
	stack_b[i - 1] = tmp;
	ft_printf("rb\n");
}

void	ft_rr(int *stack_a, int *stack_b, int size_a, int size_b)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = stack_a[i];
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
