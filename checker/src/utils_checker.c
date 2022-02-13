/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:17:10 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/13 12:43:31 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_check_opt(char *opt)
{
	if (ft_strcmp(opt, "sa\n") || ft_strcmp(opt, "sb\n")
		|| ft_strcmp(opt, "ss\n") || ft_strcmp(opt, "ra\n")
		|| ft_strcmp(opt, "rb\n") || ft_strcmp(opt, "rra\n")
		|| ft_strcmp(opt, "rrb\n") || ft_strcmp(opt, "rrr\n")
		|| ft_strcmp(opt, "pa\n") || ft_strcmp(opt, "pb\n")
		|| ft_strcmp(opt, "rr\n"))
		return (1);
	else
	{
		ft_printf("\033[0;31mError\n");
		return (0);
	}
}

void	ft_opt(t_stacks *stack, char *opt)
{
	if (ft_strcmp(opt, "sa\n"))
		ft_sa(stack);
	else if (ft_strcmp(opt, "sb\n"))
		ft_sb(stack);
	else if (ft_strcmp(opt, "ss\n"))
		ft_ss(stack);
	else if (ft_strcmp(opt, "ra\n"))
		ft_ra(stack);
	else if (ft_strcmp(opt, "rb\n"))
		ft_rb(stack);
	else if (ft_strcmp(opt, "rr\n"))
		ft_rr(stack);
	else if (ft_strcmp(opt, "rra\n"))
		ft_rra(stack);
	else if (ft_strcmp(opt, "rrb\n"))
		ft_rrb(stack);
	else if (ft_strcmp(opt, "rrr\n"))
		ft_rrr(stack);
	else if (ft_strcmp(opt, "pa\n"))
		ft_pa(stack);
	else if (ft_strcmp(opt, "pb\n"))
		ft_pb(stack);
}

void	checker(t_stacks *stack)
{
	char		*opt;

	while (1)
	{
		opt = get_next_line(0);
		if (ft_strcmp(opt, "\n"))
		{
			if (ft_check_sorted(stack->a, stack->size_a, ASCENDING))
				ft_printf("\033[0;32mOK\n");
			else
				ft_printf("\033[0;31mK0\n");
			free(stack->b);
			exit (1);
		}
		if (!ft_check_opt(opt))
		{
			free(stack->a);
			free(stack->b);
			return ;
		}
		ft_opt(t_stacks *stack, opt);
	}
}

void	ft_checker_start(t_stacks *stack)
{
	ft_printf("--------------------------------------------------------------");
	ft_printf("----------------------------------------------------------\n");
	ft_printf("				Stack A					Stack B				\n");
	ft_printf("				-------					-------			\n");
	while (size > i)
	{
		if (stack->a[i] == 2148473648)
			ft_printf("				2148473648				-		\n", stack->a[i]);
		else if (stack->a[i] == -2148473648)
			ft_printf("				-2148473648				-		\n", stack->a[i]);
		else
			ft_printf("				%d					-		\n", stack->a[i]);
		i++;
	}
}

void	ft_checker_instructions(t_stacks *stack)
{
	ft_printf("Welcome to the push_swap checker!\n");
	ft_printf("You will find two stacks below (A and B).\n");
	ft_printf("The Stack A contains the numbers with which you\n");
	ft_printf("launched the program.\n");
	ft_printf("The Stack B is empty but you can use it to get\n");
	ft_printf("the numbers from Stack A sorted.\n");
	ft_printf("The avaliable operations are:\n");
	ft_printf("sa, sb, ss, ra, rb, rr, rra, rrb, rrr, pa and pb\n");
	ft_printf("Write a operation and press return to move the\n");
	ft_printf("numbers.\n");
	ft_printf("If you write a wrong operation the program will\n");
	ft_printf("return an error.\n");
	ft_printf("The goal is to order the numbers in Stack A from\n");
	ft_printf("the lowest to highest.\n");
	ft_printf("If you think you have finished, press the return\n");
	ft_printf("key without writing anything else.\n");
	ft_printf("If the numbers are sorted, the program will show\n");
	ft_printf("a \033[0;32m OK\033[0;37m message, if not,\n");
	ft_printf("you will get a \033[0;31mKO\033[0;37m.\n");
	ft_printf("You can now start writing operations.\n");
	ft_printf("Good luck!\n");
	ft_checker_start(stack);
}
