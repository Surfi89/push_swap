/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 18:57:01 by anleclab          #+#    #+#             */
/*   Updated: 2019/02/06 21:29:39 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

void	checker(t_piles piles)
{
	int		i;

	if (piles.blen)
	{
		write(1, "KO\n", 3);
		return ;
	}
	i = -1;
	while (++i < piles.alen - 1)
		if (piles.a[i] > piles.a[i + 1])
		{
			write(1, "KO\n", 3);
			return ;
		}
	write(1, "OK\n", 3);
}
