/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rot_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:53:15 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/14 10:26:43 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "../libft/inc/ft_printf.h"

void	ft_rra(t_stacks *stack, int print)
{
	int	tmp;
	int	i;

	if (stack->size_a == 0 || stack->size_a == 1)
	{
		if (print == STACK)
			ft_printf("Nothing done. Very few numbers in Stack A.\n");
		return ;
	}
	i = stack->size_a - 1;
	tmp = stack->a[i];
	while (i)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[i] = tmp;
	if (print == OPT)
		ft_printf("rra\n");
}

void	ft_rrb(t_stacks *stack, int print)
{
	int	tmp;
	int	i;

	if (stack->size_b == 0 || stack->size_b == 1)
	{
		if (print == STACK)
			ft_printf("Nothing done. Very few numbers in Stack B.\n");
		return ;
	}
	i = stack->size_b - 1;
	tmp = stack->b[i];
	while (i)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[i] = tmp;
	if (print == OPT)
		ft_printf("rrb\n");
}

void	ft_rrr(t_stacks *stack, int print)
{
	int	tmp;
	int	i;

	if (stack->size_a == 0 || stack->size_a == 1
		|| (stack->size_b == 0 || stack->size_b == 1))
	{
		if (print == STACK)
			ft_printf("Nothing done. Very few numbers in stacks.\n");
		return ;
	}
	i = stack->size_a - 1;
	tmp = stack->a[i];
	while (i)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[i] = tmp;
	i = stack->size_b - 1;
	tmp = stack->b[i];
	while (i--)
		stack->b[i] = stack->b[i - 1];
	stack->b[i] = tmp;
	if (print == OPT)
		ft_printf("rrr\n");
}
