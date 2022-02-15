/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:17:10 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/14 14:12:36 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "../libft/inc/libft.h"
#include "../libft/inc/ft_printf.h"
#include <stdlib.h>

int	ft_check_opt(char *opt, t_stacks *stack)
{
	if (ft_strcmp(opt, "sa\n") || ft_strcmp(opt, "sb\n")
		|| ft_strcmp(opt, "ss\n") || ft_strcmp(opt, "ra\n")
		|| ft_strcmp(opt, "rb\n") || ft_strcmp(opt, "rra\n")
		|| ft_strcmp(opt, "rrb\n") || ft_strcmp(opt, "rrr\n")
		|| ft_strcmp(opt, "pa\n") || ft_strcmp(opt, "pb\n")
		|| ft_strcmp(opt, "rr\n"))
		return (1);
	else if (!opt
		&& ft_check_sorted(stack->a, stack->size_a, ASCENDING))
	{		
		ft_printf("\033[0;32mOK\n");
		return (0);
	}
	else
	{
		ft_printf("Error\n");
		return (0);
	}
}

void	ft_opt(t_stacks *stack, char *opt)
{
	if (ft_strcmp(opt, "sa\n"))
		ft_sa(stack, STACK);
	else if (ft_strcmp(opt, "sb\n"))
		ft_sb(stack, STACK);
	else if (ft_strcmp(opt, "ss\n"))
		ft_ss(stack, STACK);
	else if (ft_strcmp(opt, "ra\n"))
		ft_ra(stack, STACK);
	else if (ft_strcmp(opt, "rb\n"))
		ft_rb(stack, STACK);
	else if (ft_strcmp(opt, "rr\n"))
		ft_rr(stack, STACK);
	else if (ft_strcmp(opt, "rra\n"))
		ft_rra(stack, STACK);
	else if (ft_strcmp(opt, "rrb\n"))
		ft_rrb(stack, STACK);
	else if (ft_strcmp(opt, "rrr\n"))
		ft_rrr(stack, STACK);
	else if (ft_strcmp(opt, "pa\n"))
		ft_pa(stack, STACK);
	else if (ft_strcmp(opt, "pb\n"))
		ft_pb(stack, STACK);
	ft_print_stacks(stack);
}

void	ft_print_stacks(t_stacks *stack)
{
	int	i;

	i = 0;
	ft_printf("------------------------------------------------");
	ft_printf("|\n");
	ft_printf("	Stack A			Stack B		|\n");
	ft_printf("	-------			-------		|\n");
	while (stack->size_a > i || stack->size_b > i)
	{
		if (stack->size_a > i && stack->size_b > i)
		{
			ft_printf("	%d", stack->a[i]);
			ft_printf("			%d		|\n", stack->b[i]);
		}
		else if (stack->size_a > i)
			ft_printf("	%d			-		|\n", stack->a[i]);
		else
			ft_printf("	-			%d		|\n", stack->b[i]);
		i++;
	}
	ft_printf("------------------------------------------------");
	ft_printf("|\n");
}

void	ft_checker_start(t_stacks *stack)
{
	int	i;

	i = 0;
	ft_printf("------------------------------------------------");
	ft_printf("|\n");
	ft_printf("	STACK A			STACK B		|\n");
	ft_printf("	-------			-------		|\n");
	while (stack->size_a > i)
	{
		ft_printf("	%d			-		|\n", stack->a[i]);
		i++;
	}
	ft_printf("------------------------------------------------");
	ft_printf("|\n");
}

void	ft_checker_instructions(t_stacks *stack)
{
	ft_printf("---	 Welcome to the push_swap checker!   ---|\n");
	ft_printf("-You will find two stacks below (A and B).	|\n");
	ft_printf("-The Stack A contains the numbers with which	|\n");
	ft_printf("you launched the program.			|\n");
	ft_printf("-The Stack B is empty but you can use it to	|\n");
	ft_printf("get the numbers from Stack A sorted.		|\n");
	ft_printf("-The avaliable operations are:			|\n");
	ft_printf("sa, sb, ss, ra, rb, rr, rra, rrb, rrr, pa & pb	|\n");
	ft_printf("-Write a operation and press return to move	|\n");
	ft_printf("the numbers.					|\n");
	ft_printf("-If you write a wrong operation the program	|\n");
	ft_printf("will return an error.				|\n");
	ft_printf("The goal is to order the numbers in Stack A	|\n");
	ft_printf("from the lowest to highest.			|\n");
	ft_printf("-If you think you have finished, press the	|\n");
	ft_printf("return key without writing anything else.	|\n");
	ft_printf("-If the numbers are sorted, the program will	|\n");
	ft_printf("show a \033[0;32mOK\033[0;37m message, if not, ");
	ft_printf("you will get a \033[0;31mKO\033[0;37m.	|\n");
	ft_printf("-You can now start writing operations.		|\n");
	ft_printf("Good luck!					|\n");
	ft_checker_start(stack);
}
