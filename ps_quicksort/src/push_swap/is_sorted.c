/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 17:07:08 by anleclab          #+#    #+#             */
/*   Updated: 2019/01/23 17:32:04 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_sorted(int *pile, int len, int order)
{
	int		i;

	i = -1;
	while (++i < len - 1)
		if ((order == ASCENDING && pile[i] > pile[i + 1])
				|| (order == DESCENDING && pile[i] < pile[i + 1]))
			return (0);
	return (1);
}
