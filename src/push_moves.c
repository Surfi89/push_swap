/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:55:59 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/03 11:54:02 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "../libft/inc/ft_printf.h"

void	ft_pb(int *stack_a, int *stack_b, int size_a, int size_b)
{
	int	tmp;
	int	tmp2;
	int	i;

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
	i = 1;
	while (i < size_a)
	{
		stack_a[i - 1] = stack_a[i];
		i++;
	}
	stack_a[i - 1] = '\0';
	ft_printf("pb\n");
}

void	ft_pa(int *stack_b, int *stack_a, int size_a, int size_b)
{
	int	tmp;
	int	tmp2;
	int	i;

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
	i = 1;
	while (i < size_b)
	{
		stack_b[i - 1] = stack_b[i];
		i++;
	}
	stack_b[i - 1] = '\0';
	ft_printf("pa\n");
}
