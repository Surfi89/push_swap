/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajordan- <ajordan-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 02:18:49 by ajordan-          #+#    #+#             */
/*   Updated: 2022/02/12 02:18:55 by ajordan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_index(t_stacks *stack, int size)
{
	int	i;
	int	*tmp_stack;
	int	j;

	tmp_stack = malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		tmp_stack[i] = stack->a[i];
		i++;
	}
	ft_sort_tmp(tmp_stack, size);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tmp_stack[j] == stack->a[i])
				stack->a[i] = j;
			j++;
		}
		i++;
	}
	free (tmp_stack);
}
