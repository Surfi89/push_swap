/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:03:10 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/13 12:18:41 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"
#include "../../ft_printf/includes/ft_printf.h"
#include <stdlib.h>

void	ft_error(*a)
{
	ft_printf("Error\n");
	free(a);
	exit (1);
}

int	ft_check_sorted(*piles, size, int order)
{
	int	i;

	if (order == ASCENDING)
	{
		i = 1;
		while (i < size)
		{
			if (piles[i - 1] > piles[i])
				return (0);
			i++;
		}
		return (1);
	}
}

void	ft_check_repeat(*a, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (a[i] == a[j])
				ft_error(a);
			j++;
		}
		i++;
		j = i + 1;
	}
}

int	ft_ps_atoi(char *str, *a)
{
	unsigned int		i;
	int					neg;
	unsigned long int	num;

	i = 0;
	num = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			ft_error(a);
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	if ((num > 2147483648 && neg == -1) || (num > 2147483647 && neg == 1))
		ft_error(a);
	return (num * neg);
}

int	ft_ps_strlen(char **argv)
{
	int	i;

	i = 0;
	while (*argv)
	{
		argv++;
		i++;
	}
	return (i);
}

long	ft_check_errors(char **argv)
{
	long	*a
	int		size;
	int		i;

	i = 0;
	size = ft_ps_strlen(argv);
	a = malloc(size * sizeof(long));
	if (!a)
		return ;
	while (++i < size)
		a[i] = ft_checker_atoi(argv[i], a);
	ft_check_repeat(a, size);
	return (a);
}

int	main(int argc, char **argv)
{
	t_stacks	stack;

	if (argc > 1)
	{
		argv++;
		if (argc == 2)
			argv = ft_split(*argv, ' ');
		stack.a = ft_check_errors(argv);
		stack.size_a = argc - 1;
		ft_checker_instructions(stack);
		stack.b = malloc(stack.size_a * sizeof(long));
		if (!stack.b)
		{
			free(stack.a);
			return ;
		}
		stack.size_b = 0;
		checker(stack);
	}
	return (0);
}
