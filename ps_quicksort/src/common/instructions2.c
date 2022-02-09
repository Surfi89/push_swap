/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 13:26:53 by anleclab          #+#    #+#             */
/*   Updated: 2019/01/23 17:31:51 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

void	ra(t_piles *piles, t_opt opt)
{
	int		i;
	int		tmp;

	print_instr("ra", opt);
	if (piles->alen > 1)
	{
		tmp = piles->a[0];
		i = -1;
		while (++i < piles->alen - 1)
			piles->a[i] = piles->a[i + 1];
		piles->a[piles->alen - 1] = tmp;
		print_a(*piles, opt, piles->alen - 1, piles->alen - 1);
	}
	else
		print_a(*piles, opt, -1, -1);
	print_b(*piles, opt, -1, -1);
}

void	rb(t_piles *piles, t_opt opt)
{
	int		i;
	int		tmp;

	print_instr("rb", opt);
	print_a(*piles, opt, -1, -1);
	if (piles->blen > 1)
	{
		tmp = piles->b[0];
		i = -1;
		while (++i < piles->blen - 1)
			piles->b[i] = piles->b[i + 1];
		piles->b[piles->blen - 1] = tmp;
		print_b(*piles, opt, piles->blen - 1, piles->blen - 1);
	}
	else
		print_b(*piles, opt, -1, -1);
}

void	rr(t_piles *piles, t_opt opt)
{
	print_instr("rr", opt);
	ra(piles, NONE);
	rb(piles, NONE);
	if (piles->alen > 1)
		print_a(*piles, opt, piles->alen - 1, piles->alen - 1);
	else
		print_a(*piles, opt, -1, -1);
	if (piles->blen > 1)
		print_b(*piles, opt, piles->blen - 1, piles->blen - 1);
	else
		print_b(*piles, opt, -1, -1);
}

void	rra(t_piles *piles, t_opt opt)
{
	int		i;
	int		tmp;

	print_instr("rra", opt);
	if (piles->alen > 1)
	{
		tmp = piles->a[piles->alen - 1];
		i = piles->alen;
		while (--i > 0)
			piles->a[i] = piles->a[i - 1];
		piles->a[0] = tmp;
		print_a(*piles, opt, 0, 0);
	}
	else
		print_a(*piles, opt, -1, -1);
	print_b(*piles, opt, -1, -1);
}

void	rrb(t_piles *piles, t_opt opt)
{
	int		i;
	int		tmp;

	print_instr("rrb", opt);
	print_a(*piles, opt, -1, -1);
	if (piles->blen > 1)
	{
		tmp = piles->b[piles->blen - 1];
		i = piles->blen;
		while (--i > 0)
			piles->b[i] = piles->b[i - 1];
		piles->b[0] = tmp;
		print_b(*piles, opt, 0, 0);
	}
	else
		print_b(*piles, opt, -1, -1);
}
