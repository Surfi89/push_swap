/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:03:08 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/02 12:13:16 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_check_repeat(int *stack_a, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (stack_a[i] == stack_a[j])
			{
				free(stack_a);
				ft_error();
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

int	ft_ps_atoi(char *str)
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
			ft_error();
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	if ((num > 2147483648 && neg == -1) || (num > 2147483647 && neg == 1))
		ft_error();
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

void	ft_push_swap(char **argv)
{
	int	*stack_a;
	int	*stack_b;
	int	i;
	int	size;

	i = 0;
	size = ft_ps_strlen(argv);
	stack_a = malloc(size * sizeof(int));
	if (!stack_a)
		return ;
	while (size > i)
	{
		stack_a[i] = ft_ps_atoi(argv[i]);
		i++;
	}
	ft_check_repeat(stack_a, size);
	stack_b = malloc(size * sizeof(int));
	if (!stack_b)
		return ;
	ft_pruebas(stack_a, stack_b);
	ft_sort(stack_a, stack_b, size);
	ft_pruebas(stack_a, stack_b);
	free(stack_a);
	free(stack_b);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		argv++;
		if (argc == 2)
			argv = ft_split(*argv, ' ');
		ft_push_swap(argv);
		return (0);
	}
	return (0);
}
