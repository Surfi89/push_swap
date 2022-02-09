/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 11:43:44 by anleclab          #+#    #+#             */
/*   Updated: 2019/02/06 21:31:44 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "common.h"

void	sa(t_piles *piles, t_opt opt)
{
	print_instr("sa", opt);
	if (piles->alen > 1)
	{
		ft_array_swap(piles->a, 0, 1);
		print_a(*piles, opt, 0, 1);
	}
	else
		print_a(*piles, opt, -1, -1);
	print_b(*piles, opt, -1, -1);
}

void	sb(t_piles *piles, t_opt opt)
{
	print_instr("sb", opt);
	print_a(*piles, opt, -1, -1);
	if (piles->blen > 1)
	{
		ft_array_swap(piles->b, 0, 1);
		print_b(*piles, opt, 0, 1);
	}
	else
		print_b(*piles, opt, -1, -1);
}

void	ss(t_piles *piles, t_opt opt)
{
	print_instr("ss", opt);
	sb(piles, NONE);
	sa(piles, NONE);
	if (piles->alen > 1)
		print_a(*piles, opt, 0, 1);
	else
		print_a(*piles, opt, -1, -1);
	if (piles->blen > 1)
		print_b(*piles, opt, 0, 1);
	else
		print_b(*piles, opt, -1, -1);
}

void	pa(t_piles *piles, t_opt opt)
{
	int		i;

	print_instr("pa", opt);
	if (piles->blen)
	{
		piles->alen++;
		i = piles->alen;
		while (--i > 0)
			piles->a[i] = piles->a[i - 1];
		piles->a[0] = piles->b[0];
		i = -1;
		piles->blen--;
		while (++i < piles->blen)
			piles->b[i] = piles->b[i + 1];
		print_a(*piles, opt, 0, 0);
	}
	else
		print_a(*piles, opt, -1, -1);
	print_b(*piles, opt, -1, -1);
}

void	pb(t_piles *piles, t_opt opt)
{
	int		i;

	print_instr("pb", opt);
	if (piles->alen)
	{
		piles->blen++;
		i = piles->blen;
		while (--i > 0)
			piles->b[i] = piles->b[i - 1];
		piles->b[0] = piles->a[0];
		i = -1;
		piles->alen--;
		while (++i < piles->alen)
			piles->a[i] = piles->a[i + 1];
		print_a(*piles, opt, -1, -1);
		print_b(*piles, opt, 0, 0);
	}
	else
	{
		print_a(*piles, opt, -1, -1);
		print_b(*piles, opt, -1, -1);
	}
}
