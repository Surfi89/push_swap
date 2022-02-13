/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_print_stacks.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:56:24 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/13 20:57:40 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "../libft/inc/libft.h"
#include "../libft/inc/ft_printf.h"

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
		{
			ft_printf("				%d", stack->a[i]);
			ft_printf("					%d		\n", stack->b[i]);
		}
		else if (stack->size_a > i)
			ft_printf("				%d					-		\n", stack->a[i]);
		else
			ft_printf("				-					%d		\n", stack->b[i]);
		i++;
	}
	ft_printf("--------------------------------------------------------------");
	ft_printf("----------------------------------------------------------\n");
}
