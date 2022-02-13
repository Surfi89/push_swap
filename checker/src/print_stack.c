/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:56:24 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/13 13:06:00 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

void	ft_print_stack_a(long *a, int i)
{
	if (a[i] == 2148473648)
		ft_printf("				2148473648				-		\n");
	else if (a[i] == -2148473648)
		ft_printf("				-2148473648				-		\n");
	else
		ft_printf("				%d					-		\n", a[i]);
}

void	ft_print_stack_b(long *b, int i)
{
	if (b[i] == 2148473648)
		ft_printf("				-				2148473648		\n");
	else if (b[i] == -2148473648)
		ft_printf("				-				-2148473648		\n");
	else
		ft_printf("				-					%d		\n", b[i]);
}

void	ft_print_both(t_stacks *stack, int i)
{
	if (stack->a[i] == 2148473648)
		ft_printf("				2148473648");
	else if (stack->a[i] == -2148473648)
		ft_printf("				-2148473648");
	else
		ft_printf("				%d", stack->a[i]);
	if (stack->b[i] == 2148473648)
		ft_printf("				2148473648		\n");
	else if (b[i] == -2148473648)
		ft_printf("				-2148473648		\n");
	else
		ft_printf("					%d		\n", stack->b[i]);
}

void	ft_print_stacks(t_stacks *stack)
{
	int	i;

	i = 0;
	ft_printf("--------------------------------------------------------------");
	ft_printf("----------------------------------------------------------\n");
	ft_printf("				Stack A					Stack B				\n");
	ft_printf("				-------					-------			\n");
	while (stack->size_a > i || stack->size_b > i)
	{
		if (stack->size_a > i && stack->size_b > i)
			ft_print_both(stack, i);
		else if (stack->size_a > i)
			ft_print_stack_a(stack->a, i);
		else
			ft_print_stack_b(stack->b, i);
		i++;
	}
	ft_printf("--------------------------------------------------------------");
	ft_printf("----------------------------------------------------------\n");
}
