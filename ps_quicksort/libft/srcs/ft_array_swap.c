/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 10:35:50 by anleclab          #+#    #+#             */
/*   Updated: 2019/04/04 08:54:13 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Swaps elements at index i1 and i2 if array exists.
*/
void	ft_array_swap(int *array, int i1, int i2)
{
	int		tmp;

	if (!array)
		return ;
	tmp = array[i1];
	array[i1] = array[i2];
	array[i2] = tmp;
}
