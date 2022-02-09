/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaiel <anaiel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 15:04:15 by anleclab          #+#    #+#             */
/*   Updated: 2019/01/30 10:54:41 by anaiel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	quick_sort_3(t_piles *piles, t_fun *fun_list, t_opt opt)
{
	if (piles->a[0] < piles->a[1] && piles->a[0] < piles->a[2])
	{
		if (piles->a[1] > piles->a[2])
			follow_instructions(piles, fun_list, "rra sa", opt);
	}
	else if (piles->a[0] > piles->a[1] && piles->a[0] > piles->a[2])
	{
		if (piles->a[1] < piles->a[2])
			ra(piles, opt);
		else
			follow_instructions(piles, fun_list, "sa rra", opt);
	}
	else
	{
		if (piles->a[1] < piles->a[2])
			sa(piles, opt);
		else
			rra(piles, opt);
	}
}

void		sort_3(t_piles *piles, t_fun *fun_list, int len, t_opt opt)
{
	if (len == 3 && piles->alen == 3)
		quick_sort_3(piles, fun_list, opt);
	else if (len == 2)
	{
		if (piles->a[0] > piles->a[1])
			sa(piles, opt);
	}
	else if (len == 3)
	{
		while (len != 3 || !(piles->a[0] < piles->a[1]
					&& piles->a[1] < piles->a[2]))
			if (len == 3 && piles->a[0] > piles->a[1] && piles->a[2])
				sa(piles, opt);
			else if (len == 3 && !(piles->a[2] > piles->a[0]
						&& piles->a[2] > piles->a[1]))
			{
				pb(piles, opt);
				len--;
			}
			else if (piles->a[0] > piles->a[1])
				sa(piles, opt);
			else if (len++)
				pa(piles, opt);
	}
}

void		push_sort_3(t_piles *piles, t_fun *fun_list, int len, t_opt opt)
{
	if (len == 1)
		pa(piles, opt);
	else if (len == 2)
	{
		if (piles->b[0] < piles->b[1])
			sb(piles, opt);
		follow_instructions(piles, fun_list, "pa pa", opt);
	}
	else if (len == 3)
	{
		while (len || !(piles->a[0] < piles->a[1] && piles->a[1] < piles->a[2]))
			if (len == 1 && piles->a[0] > piles->a[1])
				sa(piles, opt);
			else if (len == 1 || (len >= 2 && piles->b[0] > piles->b[1])
					|| (len == 3 && piles->b[0] > piles->b[2]))
			{
				pa(piles, opt);
				len--;
			}
			else
				sb(piles, opt);
	}
}
